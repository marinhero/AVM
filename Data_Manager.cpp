//
// Data_Manager.cpp for abstractvm in /Users/sabs231/Documents/EPITECH/Classes/C++/Projects/AbstractVM/abstractvm
//
// Made by Marin Alcaraz
// Login   <alcara_m@epitech.net>
//
// Started on  Fri Feb 15 11:25:18 2013 Marin Alcaraz
// Last update Fri Feb 22 10:48:12 2013 sergioandres baezserrano
//

#include "Data_Manager.hh"
#include "Grammar.hh"
#include "VMException.hh"
#include "CPU.hh"

Data_Manager :: Data_Manager()
{
    file_status = 0;
}

Data_Manager :: ~Data_Manager()
{

}

char Data_Manager :: is_valid_word(std::string str)
{
    Grammar words;
    words.init_grammar();
    char key;

    key = words.exist(str);
    if (key != 'Z')
        return (key);
   return ('Z');
}

int Data_Manager :: get_file_status() const
{
    return (this->file_status);
}

char* Data_Manager :: get_file_name() const
{
    return (this->name);
}

void Data_Manager :: set_file_status(int n)
{
    this->file_status = n;
}

void Data_Manager :: set_file_name(char *name)
{
    this->name = name;
}


int Data_Manager :: string_to_int(std::string str)
{
    int number;
    std::stringstream ss(str);

    ss >> number;
    return (number);
}

std::string Data_Manager :: get_sequence(std::string str)
{
    int     piv;
    int     piv2;
    std::string tmp = "";
    std::string bk = "";
    std::string code = "";

    bk = str;
    piv = str.find(" ");
    tmp = str.substr(0, piv);
    code = this->is_valid_word(tmp);
    str = str.substr(piv + 1);
    piv2 = str.find("(");
    tmp = str.substr(0,piv2);
    code = code + this->is_valid_word(tmp);
    str = str.substr(piv2 + 1);
    piv = bk.find("(");
    bk = bk.substr(piv + 1, (bk.length() - piv) - 2);
    if (this->string_to_int(bk) > 0)
        code = code + 'C';
    return (code);
}

Instruction::IInstruction   *Data_Manager::createInstruction(std::string str)
{
  int   piv;
  int   piv2;
  std::string tmp = "";
  std::string bk = "";
  Instruction::IInstruction *instruction;

  bk = str;
  piv = str.find(" ");
  tmp = str.substr(0, piv);
  instruction = AbstractVM::getVM()->getInstructionFactory()->createInstruction(tmp);
  if (tmp.compare("push") == 0 || tmp.compare("assert") == 0)
  {
    str = str.substr(piv + 1);
    piv2 = str.find("(");
    tmp = str.substr(0, piv2);
    instruction->addParameter(tmp);
    str = str.substr(piv2 + 1);
    piv = bk.find("(");
    bk = bk.substr(piv + 1, (bk.length() - piv) - 2);
    instruction->addParameter(bk);
    instruction->end();
  }
  return (instruction);
}

int Data_Manager :: check_line(std::string str, int line)
{
    std::string code = "";

    if (this->is_valid_word(str) == 'Z')
    {
        code = this->get_sequence(str);
        if (code.compare("ABC") == 0)
            return (1);
    }
    else
        return (1);
    throw SyntaxErrorException("", line);
    return (0);
}

void Data_Manager :: read_line()
{
    int         ln;
    std::string line;

    line = " ";
    ln = 1;
    while (line.compare(";;"))
    {
        std::getline(std::cin, line);
        if (line[0] != ';')
            check_line(line, ln);
        ln = ln + 1;
    }
}

CPU::ALU *Data_Manager :: read_file(char *file_name)
{
    int         flag;
    int         ln;
    std::string line;
    CPU::ALU    *instructions;

    instructions = new CPU::ALU();
    flag = 1;
    ln = 1;
    std::ifstream myfile (file_name);
    if (myfile.is_open())
    {
        this->set_file_name(file_name);
        while (myfile.good())
        {
            getline (myfile, line);
            if (line[0] != ';' && line.empty() != true)
            {
              flag *= check_line(line, ln);
              if (flag == 1)
                instructions->addInstrunction(this->createInstruction(line));
            }
            ln = ln + 1;
        }
        myfile.close();
        if (flag == 1)
        {
            this->set_file_status(1);
            return (instructions);
        }
        else
        {
            this->set_file_status(0);
            return (NULL);
        }
    }
    else
        throw FileException("error opening file");
}

void Data_Manager :: read_from(int flag, char *file_name)
{
    std::string line;
    CPU::ALU    *alu;

    if (flag == 0)
        read_line();
    if (flag == 1)
    {
        alu = read_file(file_name);
        AbstractVM::getVM()->getCpuCore()->execute(alu);
    }
}
