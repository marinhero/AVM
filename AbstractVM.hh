/*
** AbstractVM.h for abstractvm in /Users/sabs231/Documents/EPITECH/Classes/C++/Projects/AbstractVM/abstractvm
**
** Made by sergioandres baezserrano
** Login   <baezse_s@epitech.net>
**
** Started on  Tue Feb 19 20:15:59 2013 sergioandres baezserrano
** Last update Tue Feb 19 20:16:14 2013 sergioandres baezserrano
*/

#ifndef ABSTRACTVM_HH_
#  define ABSTRACTVM_HH_

#include "OperandFactory.hh"
#include "Memory.hh"

class AbstractVM
{
  protected:
    static  AbstractVM  *theOne;
    OperandFactory      *operandFactory;
    Memory::IStack      *stack;

  public:
    AbstractVM();
    ~AbstractVM();
    void initOperands();
    static AbstractVM   *getVM();
    OperandFactory      *getOperandFactory() const;
    Memory::IStack      *getStack() const;
};

#endif /* !ABSTRACTVM_HH_ */
