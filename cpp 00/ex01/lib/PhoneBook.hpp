#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include <cstring>
#include <stdio.h>
#include <iostream>
#include "Contact.hpp"

class PhoneBook
{
    public:
        PhoneBook();
        void add();
        void search();
        void exit();
        int index;
    private:
        static int counter;
        Contact contacts[8];
};

#endif