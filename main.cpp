//
// main.cpp for abstractvm in /Users/sabs231/Documents/EPITECH/Classes/C++/Projects/AbstractVM/abstractvm
//
// Made by sergioandres baezserrano
// Login   <baezse_s@epitech.net>
//
// Started on  Fri Feb 15 10:13:33 2013 sergioandres baezserrano
// Last update Sat Feb 16 10:33:41 2013 sergioandres baezserrano
//

#include <sstream>
#include <iostream>

int main()
{
  std::string hola = "42";
  int value = 0;

  std::istringstream test(hola);
  test >> value;

  std::cout     << value
                << value + 42
                << std::endl;
  return (0);
}
