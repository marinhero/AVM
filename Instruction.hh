//
// Instruction.hh for abstractvm in /Users/sabs231/Documents/EPITECH/Classes/C++/Projects/AbstractVM/abstractvm
//
// Made by sergioandres baezserrano
// Login   <baezse_s@epitech.net>
//
// Started on  Mon Feb 18 18:57:29 2013 sergioandres baezserrano
// Last update Tue Feb 19 16:55:47 2013 sergioandres baezserrano
//

#ifndef INSTRUCTION_HH_
# define INSTRUCTION_HH_

#include <string>

namespace Instruction
{
  class IInstruction
  {
    public:
      //virtual void init() = 0;
      //virtual void end() = 0;
      virtual void execute() = 0;
      virtual void addParameter(std::string &param) = 0;
      virtual void operator()() = 0;
      virtual ~IInstruction() {}
  };

  class AInstruction : public IInstruction
  {
    public:
      AInstruction();
      //virtual void init();
      //virtual void end();
      virtual void addParameter(std::string &param);
      virtual void operator()();
      virtual void execute() = 0;
      virtual ~AInstruction() = 0;
  };

  class Add : public AInstruction
  {
    public:
      Add();
      ~Add();
      void  execute();
  };
};

#endif
