//
// CPU.cpp for abstractvm in /Users/sabs231/Documents/EPITECH/Classes/C++/Projects/AbstractVM/abstractvm
//
// Made by sergioandres baezserrano
// Login   <baezse_s@epitech.net>
//
// Started on  Mon Feb 18 20:53:27 2013 sergioandres baezserrano
// Last update Fri Feb 22 13:49:27 2013 sergioandres baezserrano
//

#include "VMException.hh"
#include "CPU.hh"

CPU::ALU::ALU()
{
}

CPU::ALU::~ALU()
{
}

size_t                        CPU::ALU::instructionSize() const
{
  return (this->instructions.size());
}

void                          CPU::ALU::addInstrunction(Instruction::IInstruction * instruction)
{
  this->instructions.push_back(instruction);
}

void                          CPU::ALU::prepareInstructions()
{
  this->position = this->instructions.begin();
}

Instruction::IInstruction *   CPU::ALU::nextInstruction()
{
  Instruction::IInstruction     *instruct;

  if (this->position == this->instructions.end())
    return NULL;
  instruct = *(this->position);
  this->position++;
  return (instruct);
}

CPU::Core::Core()
{
}

CPU::Core::~Core()
{
}

void CPU::Core::execute(CPU::ALU * instructions)
{
  Instruction::IInstruction * inst;

  try
  {
    instructions->prepareInstructions();
    while ((inst = instructions->nextInstruction()))
      inst->execute();
  }
  catch (ExitInstException & e)
  {
    return ;
  }
  throw ExitInstException("There is no exist instruction");
}
