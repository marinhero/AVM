//
// Error.hpp for abstractvm in /Users/Marin/EPITECH/c++/abstractvm
//
// Made by Marin Alcaraz
// Login   <alcara_m@epitech.net>
//
// Started on  Fri Feb 15 11:26:06 2013 Marin Alcaraz
// Last update Sat Feb 16 10:48:16 2013 Marin Alcaraz
//

class Errors {
    public:
        class  BaseError : public std::exception
    {
        const char *what(void) const throw()
        {
            return ("Exception generated");
        }
    };
        class  UnknownInstructionError : public BaseError
    {
        const char *what(void) const throw()
        {
            return ("UnkownInstruction Exception generated");
        }

    };
        class  LexicalError : public BaseError
    {
        const char *what(void) const throw()
        {
            return ("Lexical Exception generated");
        }

    };
        class  SyntacticError : public BaseError
    {
        const char *what(void) const throw()
        {
            return ("Syntactic Exception generated");
        }
    }
        class  OverflowError : public BaseError
    {
        const char *what(void) const throw()
        {
            return ("Overflow Exception generated");
        }
    }
        class  UnderflowError : public BaseError
    {
        const char *what(void) const throw()
        {
            return ("Underflow Exception generated");
        }
    }
        class  PopError : public BaseError
    {
        const char *what(void) const throw()
        {
            return ("Pop Exception generated");
        }
    }
        class  DivisionError : public BaseError
    {
        const char *what(void) const throw()
        {
            return ("Division Exception generated");
        }
    }
        class  ExitError : public BaseError
    {
        const char *what(void) const throw()
        {
            return ("Error Exception generated");
        }
    }
        class  AssertError : public BaseError
    {
        const char *what(void) const throw()
        {
            return ("Assert Exception generated");
        }
    }
        class  StackError : public BaseError
    {
        const char *what(void) const throw()
        {
            return ("Stack Exception generated");
        }
    }
};
