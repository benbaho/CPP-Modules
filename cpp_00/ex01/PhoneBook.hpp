#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include <iostream>
#include "contact.hpp"
#include <iomanip>

class PhoneBook
{
    public:
        Contact book[8];
        void add(PhoneBook *list);
        void search(PhoneBook *list);
};

#endif