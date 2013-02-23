/*
** InstructionHandler.h for abstractvm in /Users/sabs231/Documents/EPITECH/Classes/C++/Projects/AbstractVM/abstractvm
**
** Made by sergioandres baezserrano
** Login   <baezse_s@epitech.net>
**
** Started on  Mon Feb 18 19:13:50 2013 sergioandres baezserrano
** Last update Mon Feb 18 19:14:00 2013 sergioandres baezserrano
*/

#ifndef INSTRUCTIONHANDLER_HH_
#  define INSTRUCTIONHANDLER_HH_

#include "Instruction.hh"

namespace InstructionHandler
{
  class IInstrunctionHandler
  {
    public:
      virtual const std::string &               getInstructionName() const = 0;
      virtual Instruction::IInstruction *       create() const = 0;
      virtual ~IInstrunctionHandler() {}
  };

  class AInstructionHandler : public IInstrunctionHandler
  {
    protected:
      std::string                               InstructionName;
    public:
      AInstructionHandler(const std::string & IName);
      virtual ~AInstructionHandler();
      virtual const std::string &               getInstructionName() const;
      virtual Instruction::IInstruction *       create() const;
      virtual Instruction::IInstruction *       createInstruction() const = 0;
  };

  class AddHandler : public AInstructionHandler
  {
    public:
      AddHandler();
      ~AddHandler();
      virtual Instruction::IInstruction *       createInstruction() const;
  };

  class SubHandler : public AInstructionHandler
  {
    public:
      SubHandler();
      ~SubHandler();
      virtual Instruction::IInstruction *       createInstruction() const;
  };

  class MulHandler : public AInstructionHandler
  {
    public:
      MulHandler();
      ~MulHandler();
      virtual Instruction::IInstruction *       createInstruction() const;
  };

  class DivHandler : public AInstructionHandler
  {
    public:
      DivHandler();
      ~DivHandler();
      virtual Instruction::IInstruction *       createInstruction() const;
  };

  class ModHandler : public AInstructionHandler
  {
    public:
      ModHandler();
      ~ModHandler();
      virtual Instruction::IInstruction *       createInstruction() const;
  };

  class DumpHandler : public AInstructionHandler
  {
    public:
      DumpHandler();
      ~DumpHandler();
      virtual Instruction::IInstruction *       createInstruction() const;
  };

  class PopHandler : public AInstructionHandler
  {
    public:
      PopHandler();
      ~PopHandler();
      virtual Instruction::IInstruction *       createInstruction() const;
  };

  class PrintHandler : public AInstructionHandler
  {
    public:
      PrintHandler();
      ~PrintHandler();
      virtual Instruction::IInstruction *       createInstruction() const;
  };

  class ExitHandler : public AInstructionHandler
  {
    public:
      ExitHandler();
      ~ExitHandler();
      virtual Instruction::IInstruction *       createInstruction() const;
  };

  class PushHandler : public AInstructionHandler
  {
    public:
      PushHandler();
      ~PushHandler();
      virtual Instruction::IInstruction *       createInstruction() const;
  };

  class AssertHandler : public AInstructionHandler
  {
    public:
      AssertHandler();
      ~AssertHandler();
      virtual Instruction::IInstruction *       createInstruction() const;
  };
};

#endif /* !INSTRUCTIONHANDLER_H_ */
