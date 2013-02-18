//
// OverflowException.cpp for abstractvm in /Users/sabs231/Documents/EPITECH/Classes/C++/Projects/AbstractVM/abstractvm
//
// Made by sergioandres baezserrano
// Login   <baezse_s@epitech.net>
//
// Started on  Sat Feb 16 11:45:12 2013 sergioandres baezserrano
// Last update Mon Feb 18 21:55:46 2013 sergioandres baezserrano
//

#include "OverflowException.hh"

OverflowException::OverflowException(std::string msg) throw()
  : VMException(std::string("Overflow Exeption: ") + msg)
{
}

OverflowException::~OverflowException() throw()
{
}
