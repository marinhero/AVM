//
// VMException.cpp for abstractvm in /Users/sabs231/Documents/EPITECH/Classes/C++/Projects/AbstractVM/abstractvm
//
// Made by sergioandres baezserrano
// Login   <baezse_s@epitech.net>
//
// Started on  Sat Feb 16 11:28:51 2013 sergioandres baezserrano
// Last update Mon Feb 18 21:55:43 2013 sergioandres baezserrano
//

#include "VMException.hh"

VMException::VMException(std::string msg) throw() : message(msg)
{
}

const char *    VMException::what() const throw()
{
  return (this->message.data());
}

VMException::~VMException() throw()
{
}

OverflowException::OverflowException(std::string msg) throw()
  : VMException(std::string("Overflow Exeption: ") + msg)
{
}

OverflowException::~OverflowException() throw()
{
}
