//
// IOperand.hh for abstractvm in /Users/sabs231/Documents/EPITECH/Classes/C++/Projects/AbstractVM/abstractvm
//
// Made by sergioandres baezserrano
// Login   <baezse_s@epitech.net>
//
// Started on  Thu Feb 14 18:33:54 2013 sergioandres baezserrano
// Last update Sat Feb 16 11:02:03 2013 sergioandres baezserrano
//

#ifndef IOPERAND_HH_
# define IOPERAND_HH_

#include <iostream>
#include <string>
#include <sstream>

typedef enum
{
  TYPE_INT8,
  TYPE_INT16,
  TYPE_INT32,
  TYPE_FLOAT,
  TYPE_DOUBLE
} eOperandType;

enum
{
  PRESICION_INT8,
  PRESICION_INT16,
  PRESICION_INT32,
  PRESICION_FLOAT,
  PRESICION_DOUBLE
};

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
    virtual ~IOperand() {}
};

#endif
