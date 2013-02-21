//
// Instruction.cpp for abstractvm in /Users/sabs231/Documents/EPITECH/Classes/C++/Projects/AbstractVM/abstractvm
//
// Made by sergioandres baezserrano
// Login   <baezse_s@epitech.net>
//
// Started on  Tue Feb 19 12:36:51 2013 sergioandres baezserrano
// Last update Thu Feb 21 13:25:52 2013 sergioandres baezserrano
//

#include <iostream>
#include "AbstractVM.hh"
#include "Instruction.hh"
#include "VMException.hh"
#include "Memory.hh"
#include "Operand.hh"
#include "OperandFactory.hh"

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

void    Instruction::AInstruction::end()
{
}

Instruction::AInstructionParams::AInstructionParams()
{
}

Instruction::AInstructionParams::~AInstructionParams()
{
}

void Instruction::AInstructionParams::end()
{
  std::list<std::string>::iterator  it;
  OperandFactory                    *factory;
  eOperandType                      type;
  std::string                       str_type;
  std::string                       str_value;

  if (this->params.size() == 2)
  {
    it = this->params.begin();
    factory = AbstractVM::getVM()->getOperandFactory();
    str_type = *it;
    it++;
    str_value = *it;
    type = factory->getTypeFromString(str_type);
    this->op = factory->createOperand(type, str_value);
    return ;
  }
  throw WrongParameterException("wrong parameters");
}

void Instruction::AInstructionParams::addParameter(std::string &param)
{
  this->params.push_back(param);
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

Instruction::Print::Print()
{
}

Instruction::Print::~Print()
{
}

void Instruction::Print::execute()
{
  Operand::IOperand *   op;
  std::stringstream     convInt;
  std::stringstream     convChar;
  int                   bitsInt;

  op = AbstractVM::getVM()->getStack()->getTopOperand();
  convInt << op->toString();
  convInt >> bitsInt;
  if (bitsInt >= 0 && bitsInt < 256)
  {
    convChar << (char) bitsInt;
    std::cout   << convChar.str();
    return ;
  }
  throw PrintErrorException("the value is no an 8bit integer");
}

Instruction::Exit::Exit()
{
}

Instruction::Exit::~Exit()
{
}

void Instruction::Exit::execute()
{
  throw ExitProgramException("");
}

Instruction::Push::Push()
{
}

Instruction::Push::~Push()
{
}

void Instruction::Push::execute()
{
  AbstractVM::getVM()->getStack()->push(this->op);
}
