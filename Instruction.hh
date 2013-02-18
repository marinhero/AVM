//
// Instruction.hh for abstractvm in /Users/sabs231/Documents/EPITECH/Classes/C++/Projects/AbstractVM/abstractvm
//
// Made by sergioandres baezserrano
// Login   <baezse_s@epitech.net>
//
// Started on  Mon Feb 18 18:57:29 2013 sergioandres baezserrano
// Last update Mon Feb 18 19:55:21 2013 sergioandres baezserrano
//

#ifndef INSTRUCTION_HH_
# define INSTRUCTION_HH_

#include <string>

namespace Instruction
{
  class IInstruction
  {
    public:
      virtual void init() = 0;
      virtual void end() = 0;
      virtual void execute() = 0;
      virtual void addParameter(std::string &param) = 0;
      virtual void operator()() = 0;
      virtual ~IInstruction() {}
  };

  class AInstruction : public IInstruction
  {
    public:
      AInstruction();
      virtual void init();
      virtual void end();
      virtual void execute() = 0;
      virtual void addParameter(std::string &param);
      virtual void operator()();
      virtual ~AInstruction() = 0;
  };
};

#endif
