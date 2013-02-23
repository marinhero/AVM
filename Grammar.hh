//
// Grammar.hh for abstractvm in /Users/Marin/EPITECH/c++/abstractvm
//
// Made by Marin Alcaraz
// Login   <alcara_m@epitech.net>
//
// Started on  Mon Feb 18 16:48:08 2013 Marin Alcaraz
// Last update Sat Feb 23 12:00:41 2013 Marin Alcaraz
//


#ifndef _GRAMMAR_HH
# define _GRAMMAR_HH

#include <map>
#include <iostream>
class Grammar
{
    public:
        std::map<std::string, char> words;

        Grammar();
        Grammar(Grammar const &);
        ~Grammar();
        int         operator=(Grammar const);
        void        init_grammar(void);
        char        exist(std::string);
};

#endif
