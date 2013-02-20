//
// VMException.cpp for abstractvm in /Users/sabs231/Documents/EPITECH/Classes/C++/Projects/AbstractVM/abstractvm
//
// Made by sergioandres baezserrano
// Login   <baezse_s@epitech.net>
//
// Started on  Sat Feb 16 11:28:51 2013 sergioandres baezserrano
// Last update Wed Feb 20 20:48:57 2013 sergioandres baezserrano
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
  : VMException(std::string("Overflow Exception: ") + msg)
{
}

OverflowException::~OverflowException() throw()
{
}

ExitInstException::ExitInstException(std::string msg) throw()
  : VMException(std::string("No exit instruction Exception: ") + msg)
{
}

ExitInstException::~ExitInstException() throw()
{
}

BadParameterException::BadParameterException(std::string msg) throw()
  : VMException(std::string("Bad Parameter Exception: ") + msg)
{
}

BadParameterException::~BadParameterException() throw()
{
}

InstNotExistException::InstNotExistException(std::string msg) throw()
  : VMException(std::string("Instruction does not exist Exception: ") + msg)
{
}

InstNotExistException::~InstNotExistException() throw()
{
}

OpNotExistException::OpNotExistException(std::string msg) throw()
  : VMException(std::string("Operand does not exist Exception: ") + msg)
{
}

OpNotExistException::~OpNotExistException() throw()
{
}

DivisionByZeroException::DivisionByZeroException(std::string msg) throw()
  : VMException(std::string("Division by zero Exception: ") + msg)
{
}

DivisionByZeroException::~DivisionByZeroException() throw()
{
}

StackException::StackException(std::string msg) throw()
  : VMException(std::string("Stack Exception: ") + msg)
{
}

StackException::~StackException() throw()
{
}
