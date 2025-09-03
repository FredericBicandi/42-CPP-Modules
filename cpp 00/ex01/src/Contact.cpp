#include "../lib/PhoneBook.hpp"

/* 
    ** Functions **
*/
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

/* 
    ** Setters **
*/
void Contact::setFirstName(std::string firstName)
{
    this->firstName = firstName;
}
void Contact::setLastName(std::string lastName)
{
    this->lastName = lastName;
}
void Contact::setnickName(std::string nickName)
{
    this->nickName = nickName;
}
void Contact::setnickName(std::string phoneNumber)
{
    this->phoneNumber = phoneNumber;
}
void Contact::setdarkestSecret(std::string darkestSecret)
{
    this->darkestSecret = darkestSecret;
}


/*
    ** Getters **
*/
std::string Contact::getFirstName()
{
    return this->firstName;
}
std::string Contact::getLastName()
{
    return this->lastName;
}
std::string Contact::getnickName()
{
    return this->nickName;
}
std::string Contact::getphoneNumber()
{
    return this->phoneNumber;
}
std::string Contact::getdarkestSecret()
{
    return this->darkestSecret;
}