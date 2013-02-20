//
// main.cpp for abstractvm in /Users/Marin/EPITECH/c++/abstractvm
//
// Made by sergioandres baezserrano
// Login   <baezse_s@epitech.net>
//
// Started on  Fri Feb 15 10:13:33 2013 sergioandres baezserrano
// Last update Wed Feb 20 21:48:41 2013 Marin Alcaraz
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
