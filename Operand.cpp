//
// Operand.cpp for abstractvm in /Users/sabs231/Documents/EPITECH/Classes/C++/Projects/AbstractVM/abstractvm
//
// Made by sergioandres baezserrano
// Login   <baezse_s@epitech.net>
//
// Started on  Sat Feb 16 12:51:53 2013 sergioandres baezserrano
// Last update Sat Feb 16 13:30:58 2013 sergioandres baezserrano
//

#include "Operand.hh"

Operand::Operand()
{
}

Operand::~Operand()
{
}

IOperand * Operand::createOperand(eOperandType type, const std::string &_value)
{
  if (this->map.find(type) != this->map.end())
  {
    IOperand * iop = this->map[type];
    return
  }
}
