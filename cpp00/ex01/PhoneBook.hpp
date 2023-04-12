#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include <iostream>
#include "Contact.hpp"
#include <iomanip>

class PhoneBook
{
    private:
        int i;
        int c;
    public:
        Contact book[8];
        PhoneBook add(PhoneBook phonebook);
        void search(PhoneBook phonebook, std::string array);
};

#endif