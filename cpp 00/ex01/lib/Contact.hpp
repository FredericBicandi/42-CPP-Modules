#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iostream>
#include <cstring>
#include <stdio.h>

class Contact
{
private:
    std::string firstName;
    std::string lastName;
    std::string nickName;
    std::string phoneNumber;
    std::string darkestSecret;

public:
    Contact();
    ~Contact();
    void setFirstName(std::string firstName);
    void setLastName(std::string lastName);
    std::string getFirstName();
    std::string getLastName();
};

#endif