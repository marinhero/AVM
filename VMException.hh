//
// VMException.hh for abstractvm in /Users/sabs231/Documents/EPITECH/Classes/C++/Projects/AbstractVM/abstractvm
//
// Made by Marin Alcaraz
// Login   <alcara_m@epitech.net>
//
// Started on  Fri Feb 15 11:25:55 2013 Marin Alcaraz
// Last update Thu Feb 21 13:05:29 2013 sergioandres baezserrano
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
    ~VMException() throw();
};

class OverflowException : public VMException
{
  public:
    OverflowException(std::string msg) throw();
    ~OverflowException() throw();
};

class ExitInstException : public VMException
{
  public:
    ExitInstException(std::string msg) throw();
    ~ExitInstException() throw();
};

class BadParameterException : public VMException
{
  public:
    BadParameterException(std::string msg) throw();
    ~BadParameterException() throw();
};

class InstNotExistException : public VMException
{
  public:
    InstNotExistException(std::string msg) throw();
    ~InstNotExistException() throw();
};

class OpNotExistException : public VMException
{
  public:
    OpNotExistException(std::string msg) throw();
    ~OpNotExistException() throw();
};

class DivisionByZeroException : public VMException
{
  public:
    DivisionByZeroException(std::string msg) throw();
    ~DivisionByZeroException() throw();
};

class SyntaxErrorException : public VMException
{
  public:
   SyntaxErrorException(std::string msg, int ln) throw();
    ~SyntaxErrorException() throw();
};

class FileException : public VMException
{
  public:
   FileException(std::string msg) throw();
    ~FileException() throw();
};

class StackException : public VMException
{
  public:
    StackException(std::string msg) throw();
    ~StackException() throw();
};

class WrongParameterException : public VMException
{
  public:
    WrongParameterException(std::string msg) throw();
    ~WrongParameterException() throw();
};

class PrintErrorException : public VMException
{
  public:
    PrintErrorException(std::string msg) throw();
    ~PrintErrorException() throw();
};

class ExitProgramException : public VMException
{
  public:
    ExitProgramException(std::string msg) throw();
    ~ExitProgramException() throw();
};
#endif
