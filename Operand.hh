//
// Operand.hh for abstractvm in /Users/sabs231/Documents/EPITECH/Classes/C++/Projects/AbstractVM/abstractvm
//
// Made by sergioandres baezserrano
// Login   <baezse_s@epitech.net>
//
// Started on  Sat Feb 16 12:45:54 2013 sergioandres baezserrano
// Last update Sat Feb 16 12:50:47 2013 sergioandres baezserrano
//

#ifndef OPERAND_HH_
# define OPERAND_HH_

#include <map>
#include "IOperand.hh"

class Operand
{
  private:
    std::map<eOperandType, IOperand *> map;
  public:
    Operand();
    ~Operand();
    IOperand * createOperand(eOperandType type, const std::string &_value);
};

#endif
