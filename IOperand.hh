//
// IOperand.hh for abstractvm in /Users/sabs231/Documents/EPITECH/Classes/C++/Projects/AbstractVM/abstractvm
//
// Made by sergioandres baezserrano
// Login   <baezse_s@epitech.net>
//
// Started on  Thu Feb 14 18:33:54 2013 sergioandres baezserrano
// Last update Thu Feb 14 18:58:16 2013 sergioandres baezserrano
//

#ifndef IOPERAND_HH_
# define IOPERAND_HH_

#include <iostream>
#include <string>

class IOperand
{
  public:
    virtual std::string const & toString() const = 0;
    virtual int getPresicion() const = 0;
    virtual eOperandType getType() const = 0;
    virtual IOperand * operator+(const IOperand &rhs) const = 0;
    virtual IOperand * operator-(const IOperand &rhs) const = 0;
    virtual IOperand * operator*(const IOperand &rhs) const = 0;
    virtual IOperand * operator/(const IOperand &rhs) const = 0;
    virtual IOperand * operator%(const IOperand &rhs) const = 0;
    virtual ~IOperand();
};

#endif
