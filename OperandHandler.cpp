//
// OperandHandler.cpp for abstractvm in /Users/sabs231/Documents/EPITECH/Classes/C++/Projects/AbstractVM/abstractvm
//
// Made by sergioandres baezserrano
// Login   <baezse_s@epitech.net>
//
// Started on  Tue Feb 19 19:04:51 2013 sergioandres baezserrano
// Last update Fri Feb 22 09:59:33 2013 sergioandres baezserrano
//

#include "OperandHandler.hh"

OperandHandler::AOperandHandler::AOperandHandler(std::string _name, eOperandType _type, int _precision)
  : name(_name), type(_type), precision(_precision)
{
}

OperandHandler::AOperandHandler::~AOperandHandler()
{
}

std::string const & OperandHandler::AOperandHandler::toString() const
{
  return (this->name);
}

int OperandHandler::AOperandHandler::getPresicion() const
{
  return (this->precision);
}

eOperandType OperandHandler::AOperandHandler::getType() const
{
  return (this->type);
}

OperandHandler::Int8Handler::Int8Handler()
  : AOperandHandler(std::string("int8"), TYPE_INT8, PRESICION_INT8)
{
}

OperandHandler::Int8Handler::~Int8Handler()
{
}

Operand::IOperand * OperandHandler::Int8Handler::create(const std::string &val)
{
  return (new Operand::Int8(val));
}

OperandHandler::Int16Handler::Int16Handler()
  : AOperandHandler(std::string("int16"), TYPE_INT16, PRESICION_INT16)
{
}

OperandHandler::Int16Handler::~Int16Handler()
{
}

Operand::IOperand * OperandHandler::Int16Handler::create(const std::string &val)
{
  return (new Operand::Int16(val));
}

OperandHandler::Int32Handler::Int32Handler()
  : AOperandHandler(std::string("int32"), TYPE_INT32, PRESICION_INT32)
{
}

OperandHandler::Int32Handler::~Int32Handler()
{
}

Operand::IOperand * OperandHandler::Int32Handler::create(const std::string &val)
{
  return (new Operand::Int32(val));
}

OperandHandler::FloatHandler::FloatHandler()
  : AOperandHandler(std::string("float"), TYPE_FLOAT, PRESICION_FLOAT)
{
}

OperandHandler::FloatHandler::~FloatHandler()
{
}

Operand::IOperand * OperandHandler::FloatHandler::create(const std::string &val)
{
  return (new Operand::Float(val));
}

OperandHandler::DoubleHandler::DoubleHandler()
  : AOperandHandler(std::string("double"), TYPE_DOUBLE, PRESICION_DOUBLE)
{
}

OperandHandler::DoubleHandler::~DoubleHandler()
{
}

Operand::IOperand * OperandHandler::DoubleHandler::create(const std::string &val)
{
  return (new Operand::Double(val));
}
