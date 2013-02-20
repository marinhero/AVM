//
// Data_Manager.cpp for abstractvm in /Users/Marin/EPITECH/c++/abstractvm
//
// Made by Marin Alcaraz
// Login   <alcara_m@epitech.net>
//
// Started on  Fri Feb 15 11:25:18 2013 Marin Alcaraz
// Last update Wed Feb 20 18:08:01 2013 Marin Alcaraz
//

#include "Data_Manager.hh"
#include "Grammar.hh"

Data_Manager :: Data_Manager()
{
    file_status = 0;
}

Data_Manager :: ~Data_Manager()
{

}

int Data_Manager :: operator=(Data_Manager const obj)
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

int Data_Manager :: get_file_status()
{
    return (this->file_status);
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

int Data_Manager :: check_line(std::string str)
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
    return (0);
}

void Data_Manager :: read_line()
{
    std::string line;

    line = " ";
    while (line.compare(";;"))
    {
        std::getline(std::cin, line);
        check_line(line);
    }
}

int Data_Manager :: read_file(char *file_name)
{
    int         flag;
    std::string line;

    flag = 1;
    std::ifstream myfile (file_name);
    if (myfile.is_open())
    {
        while (myfile.good())
        {
            getline (myfile, line);
            if (line[0] != ';' && line.empty() != true)
                flag *= check_line(line);
        }
        myfile.close();
        if (flag == 1)
            return (1);
    }
    else
        std::cout << "Unable to open file" << std::endl;
    return 0;
}

void Data_Manager :: read_from(int flag, char *file_name)
{
    std::string line;

    if (flag == 0)
        read_line();
    if (flag == 1)
        read_file(file_name);
}
