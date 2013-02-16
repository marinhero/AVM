//
// Int32.hh for abstractvm in /Users/sabs231/Documents/EPITECH/Classes/C++/Projects/AbstractVM/abstractvm
//
// Made by sergioandres baezserrano
// Login   <baezse_s@epitech.net>
//
// Started on  Thu Feb 14 19:24:46 2013 sergioandres baezserrano
// Last update Fri Feb 15 13:46:15 2013 sergioandres baezserrano
//

#ifndef INT32_HH_
# define INT32_HH_

#include "IOperand.hh"

class Int32 : public IOperand
{
  private:
    eOperandType                    type;
    int                             number;
    IOperand *                      createInt32(const std::string & value);
  public:
    Int32();
    ~Int32();
    int     getNumber() const;
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
