//
// OperandHandler.cpp for abstractvm in /Users/sabs231/Documents/EPITECH/Classes/C++/Projects/AbstractVM/abstractvm
//
// Made by sergioandres baezserrano
// Login   <baezse_s@epitech.net>
//
// Started on  Tue Feb 19 19:04:51 2013 sergioandres baezserrano
// Last update Tue Feb 19 19:16:25 2013 sergioandres baezserrano
//

#include "OperandHandler.hh"

OperandHandler::AOperandHandler::AOperandHandler(std::string _name, eOperandType _type, int _precision)
  : name(_name), type(_type), precision(_precision)
{
}

OperandHandler::AOperandHandler::~AOperandHandler()
{
}

std::string const & OperandHandler::AOperandHandler::toString() const
{
  return (this->name);
}

int OperandHandler::AOperandHandler::getPresicion() const
{
  return (this->precision);
}

eOperandType OperandHandler::AOperandHandler::getType() const
{
  return (this->type);
}
