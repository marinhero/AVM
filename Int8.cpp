//
// Int8.cpp for abstractvm in /Users/sabs231/Documents/EPITECH/Classes/C++/Projects/AbstractVM/abstractvm
//
// Made by sergioandres baezserrano
// Login   <baezse_s@epitech.net>
//
// Started on  Sat Feb 16 10:19:30 2013 sergioandres baezserrano
// Last update Sat Feb 16 12:43:22 2013 sergioandres baezserrano
//

#include "Int8.hh"
#include "OverflowException.hh"

Int8::Int8()
{
  this->type = TYPE_INT8;
  this->value = "";
  this->number = 0;
  this->presicion = PRESICION_INT8;
}

Int8::Int8(std::string const &_value)
{
  std::istringstream    val(_value);
  val >> this->number;
  this->type = TYPE_INT8;
  this->value = _value;
  this->presicion = PRESICION_INT8;
}

Int8::~Int8()
{
}

int                             Int8::getNumber() const
{
  return (this->number);
}

std::string const &             Int8::toString() const
{
  return (this->value);
}

int                             Int8::getPresicion() const
{
  return (this->presicion);
}

eOperandType                    Int8::getType() const
{
  return (this->type);
}

IOperand *              Int8::operator+(const IOperand &rhs) const
{
  int                   result;
  Int8                  *dos;
  if (this->type < rhs.getType())
    return (rhs + *this);
  dos = new Int8(rhs.toString());
  result = this->number + dos->getNumber();
  if ((result - dos->getNumber()) != this->number)
    throw OverflowException(this->toString() + "+" + rhs.toString());
  delete dos;
}

IOperand *              Int8::operator-(const IOperand &rhs) const
{
}

IOperand *              Int8::operator*(const IOperand &rhs) const
{
}

IOperand *              Int8::operator/(const IOperand &rhs) const
{
}

IOperand *              Int8::operator%(const IOperand &rhs) const
{
}
