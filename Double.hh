//
// Double.hh for abstractvm in /Users/sabs231/Documents/EPITECH/Classes/C++/Projects/AbstractVM/abstractvm
//
// Made by sergioandres baezserrano
// Login   <baezse_s@epitech.net>
//
// Started on  Thu Feb 14 19:26:28 2013 sergioandres baezserrano
// Last update Fri Feb 15 16:59:08 2013 sergioandres baezserrano
//

#ifndef DOUBLE_HH_
# define DOUBLE_HH_

#include "IOperand.hh"

class Double : public IOperand
{
  private:
    eOperandType                    type;
    double                          number;
  public:
    Double();
    ~Double();
    double                          getNumber() const;
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
