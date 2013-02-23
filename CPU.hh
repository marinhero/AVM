/*
** CPU.h for abstractvm in /Users/sabs231/Documents/EPITECH/Classes/C++/Projects/AbstractVM/abstractvm
**
** Made by sergioandres baezserrano
** Login   <baezse_s@epitech.net>
**
** Started on  Mon Feb 18 17:20:44 2013 sergioandres baezserrano
** Last update Mon Feb 18 17:21:26 2013 sergioandres baezserrano
*/

#ifndef CPU_HH_
#  define CPU_HH_

#include <list>
#include <cstdlib>
#include "Instruction.hh"

namespace CPU
{
  class ALU
  {
    protected:
      std::list<Instruction::IInstruction *>            instructions;
      std::list<Instruction::IInstruction *>::iterator  position;

    public:
      ALU();
      ~ALU();
      size_t                                            instructionSize() const;
      void                                              addInstrunction(Instruction::IInstruction * instruction);
      void                                              prepareInstructions();
      Instruction::IInstruction const                   *nextInstruction();
  };

  class Core
  {
    public:
      Core();
      ~Core();
      void  execute(ALU * instructions) const;
  };
};

#endif /* !CPU_H_ */
