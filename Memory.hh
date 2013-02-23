/*
** Memory.h for abstractvm in /Users/sabs231/Documents/EPITECH/Classes/C++/Projects/AbstractVM/abstractvm
**
** Made by sergioandres baezserrano
** Login   <baezse_s@epitech.net>
**
** Started on  Tue Feb 19 17:15:56 2013 sergioandres baezserrano
** Last update Tue Feb 19 17:16:05 2013 sergioandres baezserrano
*/

#ifndef MEMORY_HH_
#  define MEMORY_HH_

#include <vector>
#include "Operand.hh"

namespace Memory
{
  class IStack
  {
    public:
      virtual void                  push(Operand::IOperand * op) = 0;
      virtual Operand::IOperand *   getTopOperand() const = 0;
      virtual void                  pop() = 0;
      virtual void                  dump() = 0;
      virtual ~IStack() {}
  };

  class Stack : public IStack
  {
    protected:
      std::vector<Operand::IOperand *> theStack;

    public:
      Stack();
      ~Stack();
      virtual void push(Operand::IOperand * op);
      virtual Operand::IOperand *   getTopOperand() const;
      virtual void                  pop();
      virtual void                  dump();
  };
};

#endif /* !MEMORY_HH_ */
