//
// Float.hh for abstractvm in /Users/sabs231/Documents/EPITECH/Classes/C++/Projects/AbstractVM/abstractvm
//
// Made by sergioandres baezserrano
// Login   <baezse_s@epitech.net>
//
// Started on  Thu Feb 14 19:25:24 2013 sergioandres baezserrano
// Last update Fri Feb 15 16:59:00 2013 sergioandres baezserrano
//

#ifndef FLOAT_HH_
# define FLOAT_HH_

#include "IOperand.hh"

class Float : public IOperand
{
  private:
    eOperandType                    type;
    float                           number;
  public:
    Float();
    ~Float();
    float                           getNumber() const;
    virtual std::string const &     toString() const;
    virtual int                     getPresicion() const;
    virtual eOperandType            getType() const;
    virtual IOperand *              operator+(const IOperand &rhs) const;
    virtual IOperand *              operator-(const IOperand &rhs) const;
    virtual IOperand *              operator*(const IOperand &rhs) const;
    virtual IOperand *              operator/(const IOperand &rhs) const;
    virtual IOperand *              operator%(const IOperand &rhs) const;
    virtual ~IOperand();
};

#endif
