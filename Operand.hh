//
// Operand.hh for abstractvm in /home/baezse_s/CPP/projects/AbstractVM/abstractvm
//
// Made by sergioandres baezserrano
// Login   <baezse_s@epitech.net>
//
// Started on  Sat Feb 16 12:45:54 2013 sergioandres baezserrano
// Last update Sat Feb 23 13:35:43 2013 Sergio Baez
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
  TYPE_DOUBLE,
  TYPE_UNDEF
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
      virtual std::string const &   toString() const = 0;
      virtual int                   getPresicion() const = 0;
      virtual eOperandType          getType() const = 0;
      virtual IOperand              *operator+(const IOperand &rhs) const = 0;
      virtual IOperand              *operator-(const IOperand &rhs) const = 0;
      virtual IOperand              *operator*(const IOperand &rhs) const = 0;
      virtual IOperand              *operator/(const IOperand &rhs) const = 0;
      virtual IOperand              *operator%(const IOperand &rhs) const = 0;
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
      AOperand(const std::string &name, eOperandType type, int precision);
      virtual std::string const &   toString() const;
      virtual int                   getPresicion() const;
      virtual eOperandType          getType() const;
      virtual IOperand              *operator+(const IOperand &rhs) const;
      virtual IOperand              *operator-(const IOperand &rhs) const;
      virtual IOperand              *operator*(const IOperand &rhs) const;
      virtual IOperand              *operator/(const IOperand &rhs) const;
      virtual IOperand              *operator%(const IOperand &rhs) const;
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
      static T const           convertNameToValue(const std::string &name)
      {
        T   value;
        std::stringstream conv;
        conv << name;
        conv >> value;
        return (value);
      }

      static std::string const  convertValueToName(const T &val)
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
      static char        convertNameToValue(const std::string &name)
      {
        int number;
        std::stringstream conv;
        conv << name;
        conv >> number;
        return ((char) number);
      }

      static std::string const    convertValueToName(char &val)
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
        static T modulo(const T &a, const T &b)
        {
          return (a % b);
        }
    };

  template <>
    class Modulo<float>
    {
      public:
        static float modulo(const float &a, const float &b)
        {
          return (std::fmod(a, b));
        }
    };

  template <>
    class Modulo<double>
    {
      public:
        static double modulo(const double &a, const double &b)
        {
          return (std::fmod(a, b));
        }
    };
};

#endif
