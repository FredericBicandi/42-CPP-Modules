#include "../lib/PhoneBook.hpp"

void PhoneBook::add()
{
}

void PhoneBook::search()
{
}

void PhoneBook::exit()
{
}

void PhoneBook::setCounter(int c)
{
    this->counter = c;
}
int PhoneBook::getCounter()
{
    return this->counter;
}
PhoneBook::PhoneBook()
{
    this->counter = 0;
    this->index = 0;
}