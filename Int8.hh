//
// Int8.hh for abstractvm in /Users/sabs231/Documents/EPITECH/Classes/C++/Projects/AbstractVM/abstractvm
//
// Made by sergioandres baezserrano
// Login   <baezse_s@epitech.net>
//
// Started on  Thu Feb 14 19:01:47 2013 sergioandres baezserrano
// Last update Thu Feb 14 19:08:09 2013 sergioandres baezserrano
//

#ifndef INT8_HH_
# define INT8_HH_

#include "IOperand.hh"

class Int8 : public IOperand
{
  public:
    virtual std::string const & toString() const;
    virtual int getPresicion() const;
    virtual eOperandType getType() const;
    virtual IOperand * operator+(const IOperand &rhs) const;
    virtual IOperand * operator-(const IOperand &rhs) const;
    virtual IOperand * operator*(const IOperand &rhs) const;
    virtual IOperand * operator/(const IOperand &rhs) const;
    virtual IOperand * operator%(const IOperand &rhs) const;
    virtual ~IOperand();
};

#endif
