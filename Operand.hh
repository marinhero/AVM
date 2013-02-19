//
// Operand.hh for abstractvm in /Users/sabs231/Documents/EPITECH/Classes/C++/Projects/AbstractVM/abstractvm
//
// Made by sergioandres baezserrano
// Login   <baezse_s@epitech.net>
//
// Started on  Sat Feb 16 12:45:54 2013 sergioandres baezserrano
// Last update Tue Feb 19 20:15:53 2013 sergioandres baezserrano
//

#ifndef OPERAND_HH_
# define OPERAND_HH_

#include <string>

typedef enum
{
  TYPE_INT8,
  TYPE_INT16,
  TYPE_INT32,
  TYPE_FLOAT,
  TYPE_DOUBLE
} eOperandType;

enum
{
  PRESICION_INT8,
  PRESICION_INT16,
  PRESICION_INT32,
  PRESICION_FLOAT,
  PRESICION_DOUBLE
};

namespace Operand
{
  class IOperand
  {
    public:
      virtual std::string const & toString() const = 0;
      virtual int getPresicion() const = 0;
      virtual eOperandType getType() const = 0;
      virtual IOperand * operator+(const IOperand &rhs) const = 0;
      virtual IOperand * operator-(const IOperand &rhs) const = 0;
      virtual IOperand * operator*(const IOperand &rhs) const = 0;
      virtual IOperand * operator/(const IOperand &rhs) const = 0;
      virtual IOperand * operator%(const IOperand &rhs) const = 0;
      virtual ~IOperand() {}
  };

  template<typename T>
  class AOperand : public IOperand
  {
    protected:
      T             val;
      std::string   name;
      eOperandType  type;
      int           precision;
    public:
      AOperand(std::string name, eOperandType type, int precision);
      T             convertNameToValue(std::string name);
      std::string   convertValueToName(T val);
      virtual std::string const & toString() const;
      virtual int getPresicion() const;
      virtual eOperandType getType() const;
      virtual IOperand * operator+(const IOperand &rhs);
      virtual IOperand * operator-(const IOperand &rhs);
      virtual IOperand * operator*(const IOperand &rhs);
      virtual IOperand * operator/(const IOperand &rhs);
      virtual IOperand * operator%(const IOperand &rhs);
      virtual ~AOperand();
  };
};

#endif
