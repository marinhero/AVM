//
// main.cpp for abstractvm in /Users/sabs231/Documents/EPITECH/Classes/C++/Projects/AbstractVM/abstractvm
//
// Made by sergioandres baezserrano
// Login   <baezse_s@epitech.net>
//
// Started on  Fri Feb 15 10:13:33 2013 sergioandres baezserrano
// Last update Sat Feb 16 11:08:09 2013 sergioandres baezserrano
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
