//
// Data_Manager.hh for abstractvm in /Users/Marin/EPITECH/c++/abstractvm
//
// Made by Marin Alcaraz
// Login   <alcara_m@epitech.net>
//
// Started on  Sat Feb 16 10:58:43 2013 Marin Alcaraz
// Last update Wed Feb 20 16:57:17 2013 Marin Alcaraz
//

#ifndef DATA_MANAGER_HPP
# define DATA_MANAGER_HPP

# include <set>
# include <iostream>
# include <fstream>
# include <string>
# include <sstream>


class Data_Manager
{
    int file_status;
    char *name;

    public:
    Data_Manager();
    Data_Manager(Data_Manager const &);
    ~Data_Manager();
    int                 operator=(Data_Manager const);
    void                read_from(int, char*);
    char                 is_valid_word(std::string);
    int                 get_file_status(void);
    void                set_file_status(int);
    int                 get_file_name(void);
    void                set_file_name(char *);
    int                 check_line(std::string str);
    void                read_line();
    int                 read_file(char *);
    std::string         get_sequence(std::string);
    int                 string_to_int(std::string);
};

#endif /** END OF PARSER.HPP **/
