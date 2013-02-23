//
// Instruction.hh for abstractvm in /Users/sabs231/Documents/EPITECH/Classes/C++/Projects/AbstractVM/abstractvm
//
// Made by sergioandres baezserrano
// Login   <baezse_s@epitech.net>
//
// Started on  Mon Feb 18 18:57:29 2013 sergioandres baezserrano
// Last update Fri Feb 22 18:17:56 2013 sergioandres baezserrano
//

#ifndef INSTRUCTION_HH_
# define INSTRUCTION_HH_

#include <string>
#include <list>
#include "Operand.hh"

namespace Instruction
{
  class IInstruction
  {
    public:
      //virtual void init() = 0;
      virtual void end() = 0;
      virtual void execute() const = 0;
      virtual void addParameter(std::string &param) = 0;
      virtual void operator()() = 0;
      virtual ~IInstruction() {}
  };

  class AInstruction : public IInstruction
  {
    public:
      AInstruction();
      virtual ~AInstruction();
      //virtual void init();
      virtual void addParameter(std::string &param);
      virtual void operator()();
      virtual void end();
  };

  class AInstructionParams : public AInstruction
  {
    protected:
      std::list<std::string>    params;
      Operand::IOperand         *op;

    public:
      AInstructionParams();
      virtual ~AInstructionParams();
      virtual void end();
      virtual void addParameter(std::string &param);
  };

  class Add : public AInstruction
  {
    public:
      Add();
      ~Add();
      void  execute() const;
  };

  class Sub : public AInstruction
  {
    public:
      Sub();
      ~Sub();
      void execute() const;
  };

  class Mul : public AInstruction
  {
    public:
      Mul();
      ~Mul();
      void execute() const;
  };

  class Div : public AInstruction
  {
    public:
      Div();
      ~Div();
      void execute() const;
  };

  class Mod : public AInstruction
  {
    public:
      Mod();
      ~Mod();
      void execute() const;
  };

  class Dump : public AInstruction
  {
    public:
      Dump();
      ~Dump();
      void execute() const;
  };

  class Pop : public AInstruction
  {
    public:
      Pop();
      ~Pop();
      void execute() const;
  };

  class Print : public AInstruction
  {
    public:
      Print();
      ~Print();
      void execute() const;
  };

  class Exit : public AInstruction
  {
    public:
      Exit();
      ~Exit();
      void execute() const;
  };

  class Push : public AInstructionParams
  {
    public:
      Push();
      ~Push();
      void execute() const;
  };

  class Assert : public AInstructionParams
  {
    public:
      Assert();
      ~Assert();
      void execute() const;
  };
};

#endif
