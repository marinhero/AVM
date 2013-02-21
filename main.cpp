//
// main.cpp for abstractvm in /Users/sabs231/Documents/EPITECH/Classes/C++/Projects/AbstractVM/abstractvm
//
// Made by sergioandres baezserrano
// Login   <baezse_s@epitech.net>
//
// Started on  Fri Feb 15 10:13:33 2013 sergioandres baezserrano
// Last update Thu Feb 21 19:58:56 2013 sergioandres baezserrano
//
#include <iostream>
#include <exception>
#include "Data_Manager.hh"
#include "VMException.hh"

int main(int argc, char **argv)
{
    Data_Manager p;

    try
    {
    if (argc == 1)
        p.read_from(0, argv[1]);
    else if (argc >= 2)
        p.read_from(1, argv[1]);
    } catch (std::exception &e)
    {
        std::cout <<  e.what() << std::endl;
    }
    return (0);
}
