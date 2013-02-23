//
// Memory.cpp for abstractvm in /home/baezse_s/CPP/projects/AbstractVM/abstractvm
//
// Made by sergioandres baezserrano
// Login   <baezse_s@epitech.net>
//
// Started on  Wed Feb 20 20:18:17 2013 sergioandres baezserrano
// Last update Sat Feb 23 14:51:17 2013 Sergio Baez
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

Operand::IOperand * Memory::Stack::getTopOperand() const
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
  else
    throw StackException("Empty Stack");
}

void Memory::Stack::dump()
{
  Operand::IOperand * op;
  std::vector<Operand::IOperand *>::reverse_iterator rit;

  std::cout     << "-----Top Stack of Operands-----"
                << std::endl;
  for (rit = this->theStack.rbegin(); rit != this->theStack.rend(); ++rit)
  {
    op = (*rit);
    std::cout   << op->toString()
                << std::endl;
  }
  std::cout     << "-------------Bottom------------"
                << std::endl;
}
