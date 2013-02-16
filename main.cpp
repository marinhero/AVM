//
// main.cpp for abstractvm in /Users/Marin/EPITECH/c++/abstractvm
//
// Made by sergioandres baezserrano
// Login   <baezse_s@epitech.net>
//
// Started on  Fri Feb 15 10:13:33 2013 sergioandres baezserrano
// Last update Fri Feb 15 18:41:32 2013 Marin Alcaraz
//
#include <iostream>
#include "Data_Manager.hpp"

int main(int argc, char **argv)
{
    Data_Manager p = new Data_Manager();
    if (argc == 1)
        p.read_from(0, "stdin");
    else if (argc >= 2)
        p.read_from(1, argv[1]);
    return (0);
}
