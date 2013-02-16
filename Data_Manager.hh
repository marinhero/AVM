//
// Data_Manager.hh for abstractvm in /Users/Marin/EPITECH/c++/abstractvm
//
// Made by Marin Alcaraz
// Login   <alcara_m@epitech.net>
//
// Started on  Sat Feb 16 10:58:43 2013 Marin Alcaraz
// Last update Sat Feb 16 10:59:39 2013 Marin Alcaraz
//

#ifndef DATA_MANAGER_HPP
# define DATA_MANAGER_HPP

# include <set>

class Data_Manager
{
    std::multiset<int> tokens;

    public:
    Data_Manager();
    Data_Manager(Data_Manager const &);
    ~Data_Manager();
    int operator=();
    std::multiset<int>  getTokens();
    void                read_from(int, char**);
};

#ifndef /** END OF PARSER.HPP **/
