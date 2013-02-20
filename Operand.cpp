//
// Operand.cpp for abstractvm in /Users/sabs231/Documents/EPITECH/Classes/C++/Projects/AbstractVM/abstractvm
//
// Made by sergioandres baezserrano
// Login   <baezse_s@epitech.net>
//
// Started on  Sat Feb 16 12:51:53 2013 sergioandres baezserrano
// Last update Tue Feb 19 22:46:43 2013 sergioandres baezserrano
//

#include <sstream>
#include "AbstractVM.hh"
#include "Operand.hh"
#include "VMException.hh"

template<typename T>
Operand::AOperand<T>::AOperand(std::string _name, eOperandType _type, int _precision)
  : type(_type), precision(_precision)
{
  this->val = Operand::AOperand<T>::convertNameToValue(_name);
  this->name = Operand::AOperand<T>::convertValueToName(this->val);
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
T Operand::AOperand<T>::convertNameToValue(std::string name)
{
  T value;
  std::stringstream conv;
  conv << name;
  conv >> value;
  return (value);
}

template<typename T>
std::string Operand::AOperand<T>::convertValueToName(T val)
{
  std::string name;
  std::stringstream conv;
  conv << val;
  conv >> name;
  return (name);
}

template<typename T>
Operand::IOperand * Operand::AOperand<T>::operator+(const IOperand &rhs)
{
  T otherVal;
  T res;
  std::string resultName;

  if (type < rhs.getType())
    return (rhs + *this);
  otherVal = Operand::AOperand<T>::convertNameToValue(rhs.toString());
  res = val + otherVal;
  if ((res - otherVal) != val)
    throw OverflowException(name + "+" + rhs.toString());
  resultName = Operand::AOperand<T>::convertValueToName(res);
  return (AbstractVM::getVM()->getOperandFactory()->createOperand(type, resultName));
}

template<typename T>
Operand::IOperand * Operand::AOperand<T>::operator-(const IOperand &rhs)
{
  T otherVal;
  T res;
  std::string resultName;

  if (type < rhs.getType())
    return (rhs - *this);
  otherVal = Operand::AOperand<T>::convertNameToValue(rhs.toString());
  res = val - otherVal;
  if ((res + otherVal) != val)
    throw OverflowException(name + "-" + rhs.toString());
  resultName = Operand::AOperand<T>::convertValueToName(res);
  return (AbstractVM::getVM()->getOperandFactory()->createOperand(type, resultName));
}

template<typename T>
Operand::IOperand * Operand::AOperand<T>::operator*(const IOperand &rhs)
{
  T otherVal;
  T res;
  std::string resultName;

  if (type < rhs.getType())
    return (rhs * *this);
  otherVal = Operand::AOperand<T>::convertNameToValue(rhs.toString());
  res = val * otherVal;
  if ((res / otherVal) != val)
    throw OverflowException(name + "*" + rhs.toString());
  resultName = Operand::AOperand<T>::convertValueToName(res);
  return (AbstractVM::getVM()->getOperandFactory()->createOperand(type, resultName));
}

template<typename T>
Operand::IOperand * Operand::AOperand<T>::operator/(const IOperand &rhs)
{

}

template<typename T>
Operand::IOperand * Operand::AOperand<T>::operator%(const IOperand &rhs);
