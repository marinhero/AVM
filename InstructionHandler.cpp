//
// InstructionHandler.cpp for abstractvm in /Users/sabs231/Documents/EPITECH/Classes/C++/Projects/AbstractVM/abstractvm
//
// Made by sergioandres baezserrano
// Login   <baezse_s@epitech.net>
//
// Started on  Tue Feb 19 13:22:43 2013 sergioandres baezserrano
// Last update Tue Feb 19 13:45:45 2013 sergioandres baezserrano
//

#include "InstructionHandler.hh"

InstructionHandler::AInstructionHandler::AInstructionHandler(std::string IName)
  :InstructionName(IName)
{
}

InstructionHandler::AInstructionHandler::~AInstructionHandler()
{
}

const std::string & InstructionHandler::AInstructionHandler::getInstructionName() const
{
  return (this->InstructionName);
}

Instruction::IInstruction * InstructionHandler::AInstructionHandler::create()
{
  Instruction::IInstruction  *instruct = createInstruction();
  return (instruct);
}
