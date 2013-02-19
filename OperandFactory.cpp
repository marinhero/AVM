//
// OperandFactory.cpp for abstractvm in /Users/sabs231/Documents/EPITECH/Classes/C++/Projects/AbstractVM/abstractvm
//
// Made by sergioandres baezserrano
// Login   <baezse_s@epitech.net>
//
// Started on  Tue Feb 19 19:36:35 2013 sergioandres baezserrano
// Last update Tue Feb 19 19:46:02 2013 sergioandres baezserrano
//

#include "OperandFactory.hh"
#include "VMException.hh"

OperandFactory::OperandFactory()
{
}

OperandFactory::~OperandFactory()
{
}

void    OperandFactory::addOperandToMap(OperandHandler::IOperandHandler * IOhandler)
{
  this->map[IOhandler->getType()] = IOhandler;
}

Operand::IOperand * OperandFactory::createOperand(eOperandType type, const std::string & value)
{
  if (this->map.find(type) != this->map.end())
  {
    OperandHandler::IOperandHandler * IOhandler = this->map[type];
    return (IOhandler->create());
  }
  throw OpNotExistException();
}
