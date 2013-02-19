//
// InstructionFactory.cpp for abstractvm in /Users/sabs231/Documents/EPITECH/Classes/C++/Projects/AbstractVM/abstractvm
//
// Made by sergioandres baezserrano
// Login   <baezse_s@epitech.net>
//
// Started on  Tue Feb 19 16:35:44 2013 sergioandres baezserrano
// Last update Tue Feb 19 16:51:51 2013 sergioandres baezserrano
//

#include "InstructionFactory.hh"

InstructionFactory::InstructionFactory()
{
}

InstructionFactory::~InstructionFactory()
{
}

void    InstructionFactory::addInstructionToMap(InstructionHandler::IInstrunctionHandler * Ihandler)
{
  this->map[Ihandler->getInstructionName()] = Ihandler;
}

Instruction::IInstruction *     InstructionFactory::createInstruction(std::string IName)
{
  if (this->map.find(IName) != this->map.end())
  {
    InstructionHandler::IInstrunctionHandler *Ihandler = this->map[IName];
    return (Ihandler->create());
  }
}