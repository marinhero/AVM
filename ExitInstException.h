/*
** ExitInstException.h for abstractvm in /Users/sabs231/Documents/EPITECH/Classes/C++/Projects/AbstractVM/abstractvm
** 
** Made by sergioandres baezserrano
** Login   <baezse_s@epitech.net>
** 
** Started on  Mon Feb 18 20:58:30 2013 sergioandres baezserrano
** Last update Mon Feb 18 21:10:39 2013 sergioandres baezserrano
*/

#ifndef EXITINSTEXCEPTION_HH_
#  define EXITINSTEXCEPTION_HH_

#include "VMException.hh"

class ExitInstException : public VMException
{
  public:
    ExitInstException(std::string msg) throw();
    virtual ~ExitInstException() throw();
};

#endif /* !EXITINSTEXCEPTION_HH_ */
