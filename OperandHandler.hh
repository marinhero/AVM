/*
** OperandHandler.h for abstractvm in /Users/sabs231/Documents/EPITECH/Classes/C++/Projects/AbstractVM/abstractvm
**
** Made by sergioandres baezserrano
** Login   <baezse_s@epitech.net>
**
** Started on  Tue Feb 19 17:46:07 2013 sergioandres baezserrano
** Last update Tue Feb 19 17:46:19 2013 sergioandres baezserrano
*/

#ifndef OPERANDHANDLER_HH_
#  define OPERANDHANDLER_HH_

#include "Operand.hh"

namespace OperandHandler
{
  class IOperandHandler
  {
    public:
      virtual std::string const &   toString() const = 0;
      virtual int                   getPresicion() const = 0;
      virtual eOperandType          getType() const = 0;
      virtual Operand::IOperand     *create(const std::string &val) const = 0;
  };

  class AOperandHandler : public IOperandHandler
  {
    protected:
      std::string   name;
      eOperandType  type;
      int           precision;
    public:
      AOperandHandler(const std::string &name, eOperandType type, int precision);
      virtual ~AOperandHandler();
      virtual std::string const &   toString() const;
      virtual int                   getPresicion() const;
      virtual eOperandType          getType() const;
      virtual Operand::IOperand     *create(const std::string & val) const = 0;
  };

  class Int8Handler : public AOperandHandler
  {
    public:
      Int8Handler();
      ~Int8Handler();
      virtual Operand::IOperand * create(const std::string &val) const;
  };

  class Int16Handler : public AOperandHandler
  {
    public:
      Int16Handler();
      ~Int16Handler();
      virtual Operand::IOperand * create(const std::string &val) const;
  };

  class Int32Handler : public AOperandHandler
  {
    public:
      Int32Handler();
      ~Int32Handler();
      virtual Operand::IOperand * create(const std::string &val) const;
  };

  class FloatHandler : public AOperandHandler
  {
    public:
      FloatHandler();
      ~FloatHandler();
      virtual Operand::IOperand * create(const std::string &val) const;
  };

  class DoubleHandler : public AOperandHandler
  {
    public:
      DoubleHandler();
      ~DoubleHandler();
      virtual Operand::IOperand * create(const std::string &val) const;
  };
};

#endif /* !OPERANDHANDLER_HH_ */
