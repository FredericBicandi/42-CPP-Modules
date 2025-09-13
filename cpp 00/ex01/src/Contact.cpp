#include "../lib/PhoneBook.hpp"

/*
 ** Functions **
 */
Contact::Contact()
{
    this->firstName = "";
    this->lastName = "";
    this->nickName = "";
    this->phoneNumber = "";
    this->darkestSecret = "";
}
Contact::~Contact()
{
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
void Contact::setdarkestSecret(std::string darkestSecret)
{
    this->darkestSecret = darkestSecret;
}
void Contact::setphoneNumber(std::string phoneNumber)
{
    this->phoneNumber = phoneNumber;
}
