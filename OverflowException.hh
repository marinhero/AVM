//
// OverflowException.hh for abstractvm in /Users/sabs231/Documents/EPITECH/Classes/C++/Projects/AbstractVM/abstractvm
//
// Made by sergioandres baezserrano
// Login   <baezse_s@epitech.net>
//
// Started on  Sat Feb 16 11:42:21 2013 sergioandres baezserrano
// Last update Sat Feb 16 11:50:38 2013 sergioandres baezserrano
//

#include "VMException.hh"

class OverflowException : public VMException
{
  public:
    OverflowException(std::string msg) throw();
    virtual ~OverflowException() throw();
};
