//
// Instruction.cpp for abstractvm in /Users/sabs231/Documents/EPITECH/Classes/C++/Projects/AbstractVM/abstractvm
//
// Made by sergioandres baezserrano
// Login   <baezse_s@epitech.net>
//
// Started on  Tue Feb 19 12:36:51 2013 sergioandres baezserrano
// Last update Tue Feb 19 16:58:58 2013 sergioandres baezserrano
//

#include "Instruction.hh"
#include "VMException.hh"

Instruction::AInstruction::AInstruction()
{
}

Instruction::AInstruction::~AInstruction()
{
}

void    Instruction::AInstruction::addParameter(std::string &param)
{
  throw BadParameterException(param + " - this instruction does not need parameter");
}

void    Instruction::AInstruction::operator()()
{
  return Instruction::AInstruction::execute();
}

Instruction::Add::Add()
{
}

Instruction::Add::~Add()
{
}

Instruction::Add::execute()
{
}
