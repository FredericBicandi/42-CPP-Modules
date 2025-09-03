#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include <cstring>
#include <stdio.h>
#include <iostream>
#include "Contact.hpp"

class PhoneBook
{
    private:
        int counter;
        Contact contacts[8];
    public:
        PhoneBook();
        int index;
        void add();
        void exit();
        void search();
        int getCounter();
        void setCounter(int c);
};

#endif