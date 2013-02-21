//
// InstructionHandler.cpp for abstractvm in /Users/sabs231/Documents/EPITECH/Classes/C++/Projects/AbstractVM/abstractvm
//
// Made by sergioandres baezserrano
// Login   <baezse_s@epitech.net>
//
// Started on  Tue Feb 19 13:22:43 2013 sergioandres baezserrano
// Last update Thu Feb 21 17:32:19 2013 sergioandres baezserrano
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

InstructionHandler::AddHandler::AddHandler()
  : AInstructionHandler("add")
{
}

InstructionHandler::AddHandler::~AddHandler()
{
}

Instruction::IInstruction * InstructionHandler::AddHandler::createInstruction()
{
  return (new Instruction::Add());
}

InstructionHandler::SubHandler::SubHandler()
  : AInstructionHandler("sub")
{
}

InstructionHandler::SubHandler::~SubHandler()
{
}

Instruction::IInstruction * InstructionHandler::SubHandler::createInstruction()
{
  return (new Instruction::Sub());
}

InstructionHandler::MulHandler::MulHandler()
  : AInstructionHandler("mul")
{
}

InstructionHandler::MulHandler::~MulHandler()
{
}

Instruction::IInstruction * InstructionHandler::MulHandler::createInstruction()
{
  return (new Instruction::Mul());
}

InstructionHandler::DivHandler::DivHandler()
  : AInstructionHandler("div")
{
}

InstructionHandler::DivHandler::~DivHandler()
{
}

Instruction::IInstruction * InstructionHandler::DivHandler::createInstruction()
{
  return (new Instruction::Div());
}

InstructionHandler::ModHandler::ModHandler()
  : AInstructionHandler("mod")
{
}

InstructionHandler::ModHandler::~ModHandler()
{
}

Instruction::IInstruction * InstructionHandler::ModHandler::createInstruction()
{
  return (new Instruction::Mod());
}

InstructionHandler::DumpHandler::DumpHandler()
  : AInstructionHandler("dump")
{
}

InstructionHandler::DumpHandler::~DumpHandler()
{
}

Instruction::IInstruction *       InstructionHandler::DumpHandler::createInstruction()
{
  return (new Instruction::Dump());
}

InstructionHandler::PopHandler::PopHandler()
  : AInstructionHandler("pop")
{
}

InstructionHandler::PopHandler::~PopHandler()
{
}

Instruction::IInstruction *       InstructionHandler::PopHandler::createInstruction()
{
  return (new Instruction::Pop());
}

InstructionHandler::PrintHandler::PrintHandler()
  : AInstructionHandler("print")
{
}

InstructionHandler::PrintHandler::~PrintHandler()
{
}

Instruction::IInstruction *       InstructionHandler::PrintHandler::createInstruction()
{
  return (new Instruction::Print());
}

InstructionHandler::ExitHandler::ExitHandler()
  : AInstructionHandler("exit")
{
}

InstructionHandler::ExitHandler::~ExitHandler()
{
}

Instruction::IInstruction *       InstructionHandler::ExitHandler::createInstruction()
{
  return (new Instruction::Exit());
}

InstructionHandler::PushHandler::PushHandler()
  : AInstructionHandler("push")
{
}

InstructionHandler::PushHandler::~PushHandler()
{
}

Instruction::IInstruction *       InstructionHandler::PushHandler::createInstruction()
{
  return (new Instruction::Push());
}

InstructionHandler::AssertHandler::AssertHandler()
  : AInstructionHandler("assert")
{
}

InstructionHandler::AssertHandler::~AssertHandler()
{
}

Instruction::IInstruction *       InstructionHandler::AssertHandler::createInstruction()
{
  return (new Instruction::Assert());
}
