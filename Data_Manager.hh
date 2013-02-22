//
// Data_Manager.hh for abstractvm in /Users/Marin/EPITECH/c++/abstractvm
//
// Made by Marin Alcaraz
// Login   <alcara_m@epitech.net>
//
// Started on  Sat Feb 16 10:58:43 2013 Marin Alcaraz
// Last update Fri Feb 22 17:54:38 2013 Marin Alcaraz
//

#ifndef DATA_MANAGER_HPP
# define DATA_MANAGER_HPP

# include <set>
# include <iostream>
# include <fstream>
# include <string>
# include <sstream>
# include "Instruction.hh"
# include "AbstractVM.hh"


class Data_Manager
{
    int file_status;
    char *name;

    public:
    Data_Manager();
    Data_Manager(Data_Manager const &);
    ~Data_Manager();
    int                         operator=(Data_Manager const);
    void                        read_from(int, char *);
    char                        is_valid_word(std::string const);
    int                         get_file_status(void) const;
    void                        set_file_status(int);
    char*                       get_file_name(void) const;
    void                        set_file_name(char *);
    int                         check_line(std::string str, int);
    CPU::ALU                    *read_line();
    CPU::ALU                    *read_file(char *);
    std::string                 get_sequence(std::string, int);
    Instruction::IInstruction   *createInstruction(std::string);
    int                         string_to_int(std::string const, int);
    int                         check_number(std::string number, int);

};

#endif /** END OF PARSER.HPP **/
