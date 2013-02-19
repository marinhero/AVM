/*
** InstructionFactory.h for abstractvm in /Users/sabs231/Documents/EPITECH/Classes/C++/Projects/AbstractVM/abstractvm
**
** Made by sergioandres baezserrano
** Login   <baezse_s@epitech.net>
**
** Started on  Tue Feb 19 13:51:43 2013 sergioandres baezserrano
** Last update Tue Feb 19 13:52:08 2013 sergioandres baezserrano
*/

#ifndef INSTRUCTIONFACTORY_HH_
#  define INSTRUCTIONFACTORY_HH_

#include <map>
#include <list>
#include "Instruction.hh"
#include "InstructionHandler.hh"

class InstructionFactory
{
  protected:
    std::map<std::string, InstructionHandler::IInstrunctionHandler *> map;

  public:
    InstructionFactory();
    ~InstructionFactory();
    void                            addInstructionToMap(InstructionHandler::IInstrunctionHandler * Ihandler);
    Instruction::IInstruction *     createInstruction(std::string IName);
    //std::list<std::string>          getInstructions();
};

#endif /* !INSTRUCTIONFACTORY_HH_ */
