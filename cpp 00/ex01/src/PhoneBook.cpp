#include "../includes/program.h"

PhoneBook::PhoneBook()
{
    std::cout << "phoneBook constructor called\n";
    std::cout << "Contact constructor called\n";
    this->index = 0;
    this->counter = -1;
}

void PhoneBook::add()
{
    int i = 0;
    std::string input;

    if (this->counter == 7)
        i = 0;
    else
    {
        this->counter++;
        i = this->counter;
    }

    this->contacts[i].setFirstName(setString("Enter First Name:"));
    this->contacts[i].setLastName(setString("Enter Last Name:"));
    this->contacts[i].setnickName(setString("Enter Nick Name:"));
    this->contacts[i].setphoneNumber(setPhoneNumber("Enter Phone Number:"));
    this->contacts[i].setdarkestSecret(setString("Enter Darkest Secret:"));
    system("clear");
    std::cout << "Contact added successfully!\n";
}

void PhoneBook::search()
{
    std::cout << "---------------------------------------------------------------------------\n";
    std::cout << "|     Index|First Name| Last Name|  Nickname|  Phone Number| Darkest Secret|\n";
    std::cout << "---------------------------------------------------------------------------\n";
    std::cout << "|     " << this->index << "|";
    std::cout << this->contacts[this->index].getFirstName() << "|";
    std::cout << " " << this->contacts[this->index].getLastName() << "|";
    std::cout << "  " << this->contacts[this->index].getnickName() << "|";
    std::cout << "  " << this->contacts[this->index].getphoneNumber() << "|";
    std::cout << " " << this->contacts[this->index].getdarkestSecret() << "|" << std::endl;
    std::cout << "---------------------------------------------------------------------------\n";
}
void PhoneBook::exit()
{
    std::cout << "Goodbye! 👋\n";
}

/*
============================================================================
***********************getters and setters*********************************
============================================================================
*/

int PhoneBook::getIndex()
{
    return this->index;
}
int PhoneBook::getCounter()
{
    return this->counter;
}

void PhoneBook::setIndex(int c)
{
    this->index = c;
}
void PhoneBook::setCounter(int c)
{
    this->counter = c;
}
