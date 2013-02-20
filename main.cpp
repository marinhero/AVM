//
// main.cpp for abstractvm in /Users/Marin/EPITECH/c++/abstractvm
//
// Made by sergioandres baezserrano
// Login   <baezse_s@epitech.net>
//
// Started on  Fri Feb 15 10:13:33 2013 sergioandres baezserrano
// Last update Wed Feb 20 19:55:38 2013 Marin Alcaraz
//
#include <iostream>
#include "Data_Manager.hh"

int main(int argc, char **argv)
{
    Data_Manager p;

    if (argc == 1)
        p.read_from(0, argv[1]);
    else if (argc >= 2)
        p.read_from(1, argv[1]);

    if (p.get_file_status() == 1)
        std::cout << "The file " << p.get_file_name() << " is OK" << std::endl;
    else
        std::cout << "The file " << p.get_file_name() << " is not OK" << std::endl;

    return (0);
}
