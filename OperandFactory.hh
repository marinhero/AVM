/*
** OperandFacory.h for abstractvm in /Users/sabs231/Documents/EPITECH/Classes/C++/Projects/AbstractVM/abstractvm
**
** Made by sergioandres baezserrano
** Login   <baezse_s@epitech.net>
**
** Started on  Tue Feb 19 19:19:13 2013 sergioandres baezserrano
** Last update Tue Feb 19 19:19:44 2013 sergioandres baezserrano
*/

#ifndef OPERANDFACTORY_HH_
#  define OPERANDFACTORY_HH_

#include <map>
#include "Operand.hh"
#include "OperandHandler.hh"

class OperandFactory
{
  protected:
    std::map<eOperandType, OperandHandler::IOperandHandler *> map;

  public:
    OperandFactory();
    ~OperandFactory();
    void    addOperandToMap(OperandHandler::IOperandHandler * IOhandler);
    Operand::IOperand * createOperand(eOperandType type, const std::string & value);
    eOperandType        getTypeFromString(std::string & type);
};

#endif /* !OPERANDFACORY_HH_ */
