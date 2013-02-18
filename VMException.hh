//
// VMException.hh for abstractvm in /Users/sabs231/Documents/EPITECH/Classes/C++/Projects/AbstractVM/abstractvm
//
// Made by Marin Alcaraz
// Login   <alcara_m@epitech.net>
//
// Started on  Fri Feb 15 11:25:55 2013 Marin Alcaraz
// Last update Mon Feb 18 21:55:48 2013 sergioandres baezserrano
//

#ifndef VMEXCEPTION_HH_
# define VMEXCEPTION_HH_

#include <string>
#include <exception>

class VMException : public std::exception
{
  protected:
    std::string             message;
  public:
    VMException(std::string msg) throw();
    virtual const char *    what() const throw();
    virtual ~VMException() throw();
};

class OverflowException : public VMException
{
  public:
    OverflowException(std::string msg) throw();
    virtual ~OverflowException() throw();
};

class ExitInstException : public VMException
{
  public:
    ExitInstException(std::string msg) throw();
    virtual ~ExitInstException() throw();
};

#endif
