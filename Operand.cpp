//
// Operand.cpp for abstractvm in /Users/sabs231/Documents/EPITECH/Classes/C++/Projects/AbstractVM/abstractvm
//
// Made by sergioandres baezserrano
// Login   <baezse_s@epitech.net>
//
// Started on  Sat Feb 16 12:51:53 2013 sergioandres baezserrano
// Last update Wed Feb 20 19:55:28 2013 sergioandres baezserrano
//

#include <cmath>
#include "AbstractVM.hh"
#include "Operand.hh"
#include "VMException.hh"

template<typename T>
Operand::AOperand<T>::AOperand(std::string _name, eOperandType _type, int _precision)
  : type(_type), precision(_precision)
{
  this->val = Operand::Converter<T>::convertNameToValue(_name);
  this->name = Operand::Converter<T>::convertValueToName(this->val);
}

template<typename T>
Operand::AOperand<T>::~AOperand()
{
}

template<typename T>
std::string const & Operand::AOperand<T>::toString() const
{
  return (this->name);
}

template<typename T>
int Operand::AOperand<T>::getPresicion() const
{
  return (this->precision);
}

template<typename T>
eOperandType Operand::AOperand<T>::getType() const
{
  return (this->type);
}

template<typename T>
Operand::IOperand * Operand::AOperand<T>::operator+(const IOperand &rhs) const
{
  T otherVal;
  T res;
  std::string resultName;

  if (type < rhs.getType())
    return (rhs + *this);
  otherVal = Operand::Converter<T>::convertNameToValue(rhs.toString());
  res = val + otherVal;
  if ((res - otherVal) != val)
    throw OverflowException(name + "+" + rhs.toString());
  resultName = Operand::Converter<T>::convertValueToName(res);
  return (AbstractVM::getVM()->getOperandFactory()->createOperand(type, resultName));
}

template<typename T>
Operand::IOperand * Operand::AOperand<T>::operator-(const IOperand &rhs) const
{
  T otherVal;
  T res;
  std::string resultName;

  if (type < rhs.getType())
    return (rhs - *this);
  otherVal = Operand::Converter<T>::convertNameToValue(rhs.toString());
  res = val - otherVal;
  if ((res + otherVal) != val)
    throw OverflowException(name + "-" + rhs.toString());
  resultName = Operand::Converter<T>::convertValueToName(res);
  return (AbstractVM::getVM()->getOperandFactory()->createOperand(type, resultName));
}

template<typename T>
Operand::IOperand * Operand::AOperand<T>::operator*(const IOperand &rhs) const
{
  T otherVal;
  T res;
  std::string resultName;

  if (type < rhs.getType())
    return (rhs * *this);
  otherVal = Operand::Converter<T>::convertNameToValue(rhs.toString());
  res = val * otherVal;
  if ((res / otherVal) != val)
    throw OverflowException(name + "*" + rhs.toString());
  resultName = Operand::Converter<T>::convertValueToName(res);
  return (AbstractVM::getVM()->getOperandFactory()->createOperand(type, resultName));
}

template<typename T>
Operand::IOperand * Operand::AOperand<T>::operator/(const IOperand &rhs) const
{
  eOperandType bigOperandType;
  std::string resultName;
  T otherVal;
  T res;

  otherVal = Operand::Converter<T>::convertNameToValue(rhs.toString());
  if (otherVal != 0)
  {
    bigOperandType = std::max(getType(), rhs.getType());
    res = val / otherVal;
    resultName = Operand::Converter<T>::convertValueToName(res);
    return (AbstractVM::getVM()->getOperandFactory()->createOperand(bigOperandType, resultName));
  }
  throw DivisionByZeroException("Division by zero");
}


template<typename T>
Operand::IOperand * Operand::AOperand<T>::operator%(const IOperand &rhs) const
{
  eOperandType bigOperandType;
  std::string resultName;
  T otherVal;
  T res;

  otherVal = Operand::Converter<T>::convertNameToValue(rhs.toString());
  if (otherVal != 0)
  {
    bigOperandType = std::max(getType(), rhs.getType());
    res = Operand::Modulo<T>::modulo(val, otherVal);
    resultName = Operand::Converter<T>::convertValueToName(res);
    return (AbstractVM::getVM()->getOperandFactory()->createOperand(bigOperandType, resultName));
  }
  throw DivisionByZeroException("Modulo by zero");
}

Operand::Int8::Int8(const std::string & val)
: Operand::AOperand<char>(val, TYPE_INT8, PRESICION_INT8)
{
}

Operand::Int8::~Int8()
{
}

Operand::Int16::Int16(const std::string & val)
: Operand::AOperand<short>(val, TYPE_INT16, PRESICION_INT16)
{
}

Operand::Int16::~Int16()
{
}

Operand::Int32::Int32(const std::string & val)
  : Operand::AOperand<int>(val, TYPE_INT32, PRESICION_INT32)
{
}

Operand::Int32::~Int32()
{
}

Operand::Float::Float(const std::string & val)
  : Operand::AOperand<float>(val, TYPE_FLOAT, PRESICION_FLOAT)
{
}

Operand::Float::~Float()
{
}

Operand::Double::Double(const std::string & val)
  : Operand::AOperand<double>(val, TYPE_DOUBLE, PRESICION_DOUBLE)
{
}

Operand::Double::~Double()
{
}
