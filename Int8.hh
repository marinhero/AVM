//
// Int8.hh for abstractvm in /Users/sabs231/Documents/EPITECH/Classes/C++/Projects/AbstractVM/abstractvm
//
// Made by sergioandres baezserrano
// Login   <baezse_s@epitech.net>
//
// Started on  Thu Feb 14 19:01:47 2013 sergioandres baezserrano
// Last update Fri Feb 15 13:14:20 2013 sergioandres baezserrano
//

#ifndef INT8_HH_
# define INT8_HH_

#include "IOperand.hh"

class Int8 : public IOperand
{
  private:
    eOperandType                    type;
    int                             number;
    IOperand *                      createInt8(const std::string & value);
  public:
    Int8();
    ~Int8();
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
