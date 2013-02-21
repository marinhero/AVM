//
// Grammar.cpp for abstractvm in /Users/Marin/EPITECH/c++/abstractvm
//
// Made by Marin Alcaraz
// Login   <alcara_m@epitech.net>
//
// Started on  Mon Feb 18 16:47:59 2013 Marin Alcaraz
// Last update Thu Feb 21 13:31:52 2013 Marin Alcaraz
//

#include "Grammar.hh"

Grammar :: Grammar()
{
    std::map<std::string, char> w;

    this->words = w;
}

Grammar :: ~Grammar()
{

}

void    Grammar :: init_grammar()
{
    this->words.insert(std::pair<std::string, char>("push", 'A'));
    this->words.insert(std::pair<std::string, char>("pop", 'A'));
    this->words.insert(std::pair<std::string, char>("dump", 'A'));
    this->words.insert(std::pair<std::string, char>("assert", 'A'));
    this->words.insert(std::pair<std::string, char>("add", 'A'));
    this->words.insert(std::pair<std::string, char>("sub", 'A'));
    this->words.insert(std::pair<std::string, char>("mul", 'A'));
    this->words.insert(std::pair<std::string, char>("div", 'A'));
    this->words.insert(std::pair<std::string, char>("div", 'A'));
    this->words.insert(std::pair<std::string, char>("mod", 'A'));
    this->words.insert(std::pair<std::string, char>("print", 'A'));
    this->words.insert(std::pair<std::string, char>("exit", 'A'));
    this->words.insert(std::pair<std::string, char>("int8", 'B'));
    this->words.insert(std::pair<std::string, char>("int16", 'B'));
    this->words.insert(std::pair<std::string, char>("int32", 'B'));
    this->words.insert(std::pair<std::string, char>("float", 'B'));
    this->words.insert(std::pair<std::string, char>("double", 'B'));
}

char     Grammar :: exist(std::string str)
{
 std::map<std::string, char>::iterator it;

 it = this->words.find(str);
 if (it == this->words.end())
     return ('Z');
 return (this->words[str]);
}
