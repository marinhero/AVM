//
// AbstractVM.cpp for abstractvm in /Users/sabs231/Documents/EPITECH/Classes/C++/Projects/AbstractVM/abstractvm
//
// Made by sergioandres baezserrano
// Login   <baezse_s@epitech.net>
//
// Started on  Thu Feb 21 17:14:43 2013 sergioandres baezserrano
// Last update Thu Feb 21 21:05:12 2013 sergioandres baezserrano
//

#include "AbstractVM.hh"
#include "OperandHandler.hh"
#include "InstructionHandler.hh"

AbstractVM  *AbstractVM::theOne = NULL;

AbstractVM::AbstractVM()
{
  initCpuCore();
  initInstructions();
  initOperands();
}

AbstractVM::~AbstractVM()
{
  delete this->cpuCore;
  delete this->operandFactory;
  delete this->instructionFactory;
  delete this->stack;
  if (this->theOne)
  {
    delete this->theOne;
    this->theOne = NULL;
  }
}

void AbstractVM::initOperands()
{
  this->operandFactory = new OperandFactory();
  this->operandFactory->addOperandToMap(new OperandHandler::Int8Handler());
  this->operandFactory->addOperandToMap(new OperandHandler::Int16Handler());
  this->operandFactory->addOperandToMap(new OperandHandler::Int32Handler());
  this->operandFactory->addOperandToMap(new OperandHandler::FloatHandler());
  this->operandFactory->addOperandToMap(new OperandHandler::DoubleHandler());
}

void AbstractVM::initInstructions()
{
  this->instructionFactory = new InstructionFactory();
  this->instructionFactory->addInstructionToMap(new InstructionHandler::PushHandler());
  this->instructionFactory->addInstructionToMap(new InstructionHandler::PopHandler());
  this->instructionFactory->addInstructionToMap(new InstructionHandler::DumpHandler());
  this->instructionFactory->addInstructionToMap(new InstructionHandler::AssertHandler());
  this->instructionFactory->addInstructionToMap(new InstructionHandler::AddHandler());
  this->instructionFactory->addInstructionToMap(new InstructionHandler::SubHandler());
  this->instructionFactory->addInstructionToMap(new InstructionHandler::MulHandler());
  this->instructionFactory->addInstructionToMap(new InstructionHandler::DivHandler());
  this->instructionFactory->addInstructionToMap(new InstructionHandler::ModHandler());
  this->instructionFactory->addInstructionToMap(new InstructionHandler::PrintHandler());
  this->instructionFactory->addInstructionToMap(new InstructionHandler::ExitHandler());
}

void AbstractVM::initCpuCore()
{
  this->cpuCore = new CPU::Core();
  this->stack = new Memory::Stack();
}

AbstractVM   *AbstractVM::getVM()
{
  if (theOne == NULL)
    theOne = new AbstractVM();
  return (theOne);
}

CPU::Core           *AbstractVM::getCpuCore() const
{
  return (this->cpuCore);
}

OperandFactory      *AbstractVM::getOperandFactory() const
{
  return (this->operandFactory);
}

InstructionFactory  *AbstractVM::getInstructionFactory() const
{
  return (this->instructionFactory);
}

Memory::IStack      *AbstractVM::getStack() const
{
  return (this->stack);
}
