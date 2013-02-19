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
      virtual std::string const & toString() const = 0;
      virtual int getPresicion() const = 0;
      virtual eOperandType getType() const = 0;
      virtual Operand::IOperand * create(const std::string & val) = 0;
  };

  class AOperandHandler : public IOperandHandler
  {
    protected:
      std::string   name;
      eOperandType  type;
      int           precision;
    public:
      AOperandHandler(std::string name, eOperandType type, int precision);
      virtual ~AOperandHandler();
      virtual std::string const & toString() const;
      virtual int getPresicion() const;
      virtual eOperandType getType() const;
      virtual Operand::IOperand * create(const std::string & val) = 0;
  };
};

#endif /* !OPERANDHANDLER_HH_ */
