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
      virtual Instruction::IInstruction *       create() = 0;
      virtual ~IInstrunctionHandler() {}
  };

  class AInstructionHandler : public IInstrunctionHandler
  {
    protected:
      std::string                               InstructionName;
    public:
      AInstructionHandler(std::string IName);
      virtual const std::string &               getInstructionName() const;
      virtual Instruction::IInstruction *       create();
      virtual Instruction::IInstruction *       createInstruction() = 0;
      virtual ~AInstructionHandler() = 0;
  };
};

#endif /* !INSTRUCTIONHANDLER_H_ */
