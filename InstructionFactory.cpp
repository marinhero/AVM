//
// InstructionFactory.cpp for abstractvm in /home/baezse_s/CPP/projects/AbstractVM/abstractvm
//
// Made by sergioandres baezserrano
// Login   <baezse_s@epitech.net>
//
// Started on  Tue Feb 19 16:35:44 2013 sergioandres baezserrano
// Last update Sat Feb 23 14:34:37 2013 Sergio Baez
//

#include "InstructionFactory.hh"
#include "VMException.hh"

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

Instruction::IInstruction *     InstructionFactory::createInstruction(const std::string & IName)
{
  if (this->map.find(IName) != this->map.end())
  {
    InstructionHandler::IInstrunctionHandler *Ihandler = this->map[IName];
    return (Ihandler->create());
  }
  throw InstNotExistException(IName);
}
