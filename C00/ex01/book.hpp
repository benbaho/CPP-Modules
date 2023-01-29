#ifndef BOOK_HPP
# define BOOK_HPP

# include <iostream>

class Temps
{
public:
    std::string Name ,Surname, Nickname, Number, Secretthing;
    int order;
};

class PhoneBook
{
public:
    Temps templates[8];
    int     i;
    void    search();
    int     full;
    void    add();
    void    print();

} phone;

void PhoneBook::add()
{
    i = i % 8;
    std::cout << "Please write your Name: " << std::endl;
    std::getline(std::cin, templates[i].Name);
    std::cout << "Please write your Surname: " << std::endl;
    std::getline(std::cin, templates[i].Surname);
    std::cout << "Please write your Nickname: " << std::endl;
    std::getline(std::cin, templates[i].Nickname);
    std::cout << "Please write your Number: " << std::endl;
    std::getline(std::cin, templates[i].Number);
    std::cout << "Please write your darkest secret thing: " << std::endl;
    std::getline(std::cin, templates[i].Secretthing);
    templates[i].order = i;
    if (i < 8)
        i++;
    if (i == 8)
        full = 1;
};

void PhoneBook::print()
{
    std::cout << templates[0].Name;
}

# endif