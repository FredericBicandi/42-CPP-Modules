#include "../lib/PhoneBook.hpp"

Contact::Contact()
{
    std::cout << "Contact constructor called\n";
    this->firstName = "";
    this->lastName = "";
    this->nickName = "";
    this->phoneNumber = "";
    this->darkestSecret = "";
}

Contact::~Contact()
{
    std::cout << "Object Destroyed\n";
}

void Contact::setFirstName(std::string firstName)
{
    this->firstName = firstName;
}

void Contact::setLastName(std::string lastName)
{
    this->lastName = lastName;
}

std::string Contact::getLastName()
{
    return this->lastName;
}

std::string Contact::getFirstName()
{
    return this->firstName;
}