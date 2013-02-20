//
// Memory.cpp for abstractvm in /Users/sabs231/Documents/EPITECH/Classes/C++/Projects/AbstractVM/abstractvm
//
// Made by sergioandres baezserrano
// Login   <baezse_s@epitech.net>
//
// Started on  Wed Feb 20 20:18:17 2013 sergioandres baezserrano
// Last update Wed Feb 20 20:46:21 2013 sergioandres baezserrano
//

#include <iostream>
#include "Memory.hh"

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
  if (this->theStack.empty() == false)
    return (this->theStack.at(this->theStack.size()));
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
