//
// Data_Manager.cpp for abstractvm in /Users/Marin/EPITECH/c++/abstractvm
//
// Made by Marin Alcaraz
// Login   <alcara_m@epitech.net>
//
// Started on  Fri Feb 15 11:25:18 2013 Marin Alcaraz
// Last update Tue Feb 19 21:04:26 2013 Marin Alcaraz
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

int Data_Manager :: check_line(std::string str) throw()
{
    int     piv;
    int     piv2;
    std::string tmp = "";
    std::string bk = "";
    std::string code = "";

    if (this->is_valid_word(str) != 1)
    {
        bk = str;
        piv = str.find(" ");
        tmp = str.substr(0, piv);
        //std::cout << tmp << std::endl;
        code = this->is_valid_word(tmp);
        str = str.substr(piv + 1);
        piv2 = str.find("(");
        tmp = str.substr(0,piv2);
        code = code + this->is_valid_word(tmp);
        //std::cout << tmp << std::endl;
        str = str.substr(piv2 + 1);
        piv = bk.find("(");
        bk = bk.substr(piv + 1, (bk.length() - piv) - 2);
        //std::cout << bk << std::endl;
        code = code + 'C';
        if (code.compare("ABC") == 0)
            return (1);
        else
            throw Ex;
    }
    else
    {
        std::cout << str << std::endl;
        return (1);
    }
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
    std::string line;

    std::ifstream myfile (file_name);
    if (myfile.is_open())
    {
        while (myfile.good())
        {
            getline (myfile, line);
            check_line(line);
        }
        myfile.close();
    }

    else
        std::cout << "Unable to open file";
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
