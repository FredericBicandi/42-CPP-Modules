#include "../lib/PhoneBook.hpp"

PhoneBook::PhoneBook()
{
    std::cout << "phoneBook constructor called\n";
    this->index = 0;
}

void PhoneBook::add()
{
    int i = 0;

    while (i < this->index)
    {
        if(this->contacts[i].getFirstName().empty())
        {
            
            break;
        }
        i++;

    }

}

void PhoneBook::search()
{
}

void PhoneBook::exit()
{
}

void PhoneBook::setCounter(int c)
{
    this->index = c;
}
int PhoneBook::getCounter()
{
    return this->index;
}
