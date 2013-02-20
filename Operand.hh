//
// Operand.hh for abstractvm in /Users/sabs231/Documents/EPITECH/Classes/C++/Projects/AbstractVM/abstractvm
//
// Made by sergioandres baezserrano
// Login   <baezse_s@epitech.net>
//
// Started on  Sat Feb 16 12:45:54 2013 sergioandres baezserrano
// Last update Wed Feb 20 19:45:39 2013 sergioandres baezserrano
//

#ifndef OPERAND_HH_
# define OPERAND_HH_

#include <sstream>
#include <string>
#include <cmath>

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
      virtual std::string const & toString() const;
      virtual int getPresicion() const;
      virtual eOperandType getType() const;
      virtual IOperand * operator+(const IOperand &rhs) const;
      virtual IOperand * operator-(const IOperand &rhs) const;
      virtual IOperand * operator*(const IOperand &rhs) const;
      virtual IOperand * operator/(const IOperand &rhs) const;
      virtual IOperand * operator%(const IOperand &rhs) const;
      virtual ~AOperand();
  };

  class Int8 : public AOperand<char>
  {
    public:
      Int8(const std::string & val);
      ~Int8();
  };

  class Int16 : public AOperand<short>
  {
    public:
      Int16(const std::string & val);
      ~Int16();
  };

  class Int32 : public AOperand<int>
  {
    public:
      Int32(const std::string & val);
      ~Int32();
  };

  class Float : public AOperand<float>
  {
    public:
      Float(const std::string & val);
      ~Float();
  };

  class Double : public AOperand<double>
  {
    public:
      Double(const std::string & val);
      ~Double();
  };

  template<typename T>
    class Converter
    {
      public:
      static T             convertNameToValue(std::string name)
      {
        T   value;
        std::stringstream conv;
        conv << name;
        conv >> value;
        return (value);
      }

      static std::string   convertValueToName(T val)
      {
        std::string name;
        std::stringstream conv;
        conv << val;
        conv >> name;
        return (name);
      }
    };

  template<>
    class Converter<char>
    {
      public:
      static char             convertNameToValue(std::string name)
      {
        int number;
        std::stringstream conv;
        conv << name;
        conv >> number;
        return ((char) number);
      }

      static std::string   convertValueToName(char val)
      {
        std::string name;
        std::stringstream conv;
        conv << (int) val;
        conv >> name;
        return (name);
      }
    };

  template <class T>
    class Modulo
    {
      public:
        static T modulo(T a, T b)
        {
          return (a % b);
        }
    };

  template <>
    class Modulo<float>
    {
      public:
        static float modulo(float a, float b)
        {
          return (std::fmod(a, b));
        }
    };

  template <>
    class Modulo<double>
    {
      public:
        static double modulo(double a, double b)
        {
          return (std::fmod(a, b));
        }
    };
};

#endif
