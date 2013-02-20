//
// Instruction.cpp for abstractvm in /Users/sabs231/Documents/EPITECH/Classes/C++/Projects/AbstractVM/abstractvm
//
// Made by sergioandres baezserrano
// Login   <baezse_s@epitech.net>
//
// Started on  Tue Feb 19 12:36:51 2013 sergioandres baezserrano
// Last update Wed Feb 20 22:12:43 2013 sergioandres baezserrano
//

#include "AbstractVM.hh"
#include "Instruction.hh"
#include "VMException.hh"
#include "Memory.hh"
#include "Operand.hh"

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
  return (execute());
}

Instruction::Add::Add()
{
}

Instruction::Add::~Add()
{
}

void Instruction::Add::execute()
{
  Memory::IStack        *stack;
  Operand::IOperand     *uno;
  Operand::IOperand     *dos;

  stack = AbstractVM::getVM()->getStack();
  uno = stack->getTopOperand();
  stack->pop();
  dos = stack->getTopOperand();
  stack->pop();
  stack->push(*uno + *dos);
}

Instruction::Sub::Sub()
{
}

Instruction::Sub::~Sub()
{
}

void Instruction::Sub::execute()
{
  Memory::IStack        *stack;
  Operand::IOperand     *uno;
  Operand::IOperand     *dos;

  stack = AbstractVM::getVM()->getStack();
  uno = stack->getTopOperand();
  stack->pop();
  dos = stack->getTopOperand();
  stack->pop();
  stack->push(*uno - *dos);
}

Instruction::Mul::Mul()
{
}

Instruction::Mul::~Mul()
{
}

void Instruction::Mul::execute()
{
  Memory::IStack        *stack;
  Operand::IOperand     *uno;
  Operand::IOperand     *dos;

  stack = AbstractVM::getVM()->getStack();
  uno = stack->getTopOperand();
  stack->pop();
  dos = stack->getTopOperand();
  stack->pop();
  stack->push(*uno * *dos);
}

Instruction::Div::Div()
{
}

Instruction::Div::~Div()
{
}

void Instruction::Div::execute()
{
  Memory::IStack        *stack;
  Operand::IOperand     *uno;
  Operand::IOperand     *dos;

  stack = AbstractVM::getVM()->getStack();
  uno = stack->getTopOperand();
  stack->pop();
  dos = stack->getTopOperand();
  stack->pop();
  stack->push(*uno / *dos);
}

Instruction::Mod::Mod()
{
}

Instruction::Mod::~Mod()
{
}

void Instruction::Mod::execute()
{
  Memory::IStack        *stack;
  Operand::IOperand     *uno;
  Operand::IOperand     *dos;

  stack = AbstractVM::getVM()->getStack();
  uno = stack->getTopOperand();
  stack->pop();
  dos = stack->getTopOperand();
  stack->pop();
  stack->push(*uno % *dos);
}

Instruction::Dump::Dump()
{
}

Instruction::Dump::~Dump()
{
}

void Instruction::Dump::execute()
{
  AbstractVM::getVM()->getStack()->dump();
}

Instruction::Pop::Pop()
{
}

Instruction::Pop::~Pop()
{
}

void Instruction::Pop::execute()
{
  AbstractVM::getVM()->getStack()->pop();
}
