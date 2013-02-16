//
// Int16.hh for abstractvm in /Users/sabs231/Documents/EPITECH/Classes/C++/Projects/AbstractVM/abstractvm
//
// Made by sergioandres baezserrano
// Login   <baezse_s@epitech.net>
//
// Started on  Thu Feb 14 19:08:29 2013 sergioandres baezserrano
// Last update Fri Feb 15 16:58:02 2013 sergioandres baezserrano
//

#ifndef INT16_HH_
# define INT16_HH_

#include "IOperand.hh"

class Int16 : public IOperand
{
  private:
    eOperandType                    type;
    int                             number;
  public:
    Int16();
    ~Int16();
    int                             getNumber() const;
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
