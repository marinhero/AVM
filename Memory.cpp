//
// Memory.cpp for abstractvm in /Users/sabs231/Documents/EPITECH/Classes/C++/Projects/AbstractVM/abstractvm
//
// Made by sergioandres baezserrano
// Login   <baezse_s@epitech.net>
//
// Started on  Wed Feb 20 20:18:17 2013 sergioandres baezserrano
// Last update Fri Feb 22 13:08:27 2013 sergioandres baezserrano
//

#include <iostream>
#include "Memory.hh"
#include "VMException.hh"

Memory::Stack::Stack()
{
}

Memory::Stack::~Stack()
{
}

void Memory::Stack::push(Operand::IOperand * op)
{
  this->theStack.push_back(op);
}

Operand::IOperand * Memory::Stack::getTopOperand()
{
  std::vector<Operand::IOperand *>::size_type size;

  size = this->theStack.size();
  if (this->theStack.empty() == false)
    return (this->theStack.at(size - 1));
  throw StackException("Empty Stack");
}

void Memory::Stack::pop()
{
  if (this->theStack.empty() == false)
    this->theStack.pop_back();
  throw StackException("Empty Stack");
}

void Memory::Stack::dump()
{
  Operand::IOperand * op;
  std::vector<Operand::IOperand *>::reverse_iterator rit;

  for (rit = this->theStack.rbegin(); rit != this->theStack.rend(); ++rit)
  {
    op = (*rit);
    std::cout   << op->toString()
                << std::endl;
  }
}
