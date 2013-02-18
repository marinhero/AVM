//
// OverflowException.hh for abstractvm in /Users/sabs231/Documents/EPITECH/Classes/C++/Projects/AbstractVM/abstractvm
//
// Made by sergioandres baezserrano
// Login   <baezse_s@epitech.net>
//
// Started on  Sat Feb 16 11:42:21 2013 sergioandres baezserrano
// Last update Mon Feb 18 21:05:08 2013 sergioandres baezserrano
//

#ifndef OVERFLOWEXCEPTION_HH_
#  define OVERFLOWEXCEPTION_HH_

#include "VMException.hh"

class OverflowException : public VMException
{
  public:
    OverflowException(std::string msg) throw();
    virtual ~OverflowException() throw();
};

#endif /* !OVERFLOWEXCEPTION_HH_ */
