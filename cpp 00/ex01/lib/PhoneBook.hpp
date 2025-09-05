#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "Contact.hpp"

class PhoneBook
{
    private:
        int index;
        int counter;

    public:
        Contact contacts[8];
        PhoneBook();
      
        void add();
        void exit();
        void search();

        int getCounter();
        void setCounter(int c);

        int getIndex();
        void setIndex(int c);
};

#endif