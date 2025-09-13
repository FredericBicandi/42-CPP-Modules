#include "../includes/program.h"

void printWelcome()
{
    std::cout << "======================================================\n";
    std::cout << "\t Welcome to My Awesome PhoneBook! 📖\n";
}
void printUsage()
{

    std::cout << "=======================================================\n";
    std::cout << "\n\n";
    std::cout << "Available commands:\n";
    std::cout << "  ADD    - Save a new contact\n";
    std::cout << "  SEARCH - Display and inspect contacts\n";
    std::cout << "  EXIT   - Quit the program\n";
    std::cout << "-------------------------------------\n";
    std::cout << "Please enter one of the above commands:";
}
void printAllContacts(PhoneBook book)
{
    int i;

    i = -1;
    std::cout << "+----------+----------+----------+----------+\n";
    std::cout << "|  INDEX   |FIRST NAME| LAST NAME| NICKNAME |\n";
    std::cout << "+----------+----------+----------+----------+\n";

    while (++i <= book.getCounter())
    {
        std::string str;

        std::cout << "|         " << i << "|";

        str = book.contacts[i].getFirstName();
        if (str.length() > 10)
        {
            str = str.substr(0, 9);
            str += ".";
            std::cout << str << "|";
        }
        else
            std::cout << std::string(10 - str.length(), ' ') + str << "|";

        str = book.contacts[i].getLastName();
        if (str.length() > 10)
        {
            str = str.substr(0, 9);
            str += ".";
            std::cout << str << "|";
        }
        else
            std::cout << std::string(10 - str.length(), ' ') + str << "|";

        str = book.contacts[i].getnickName();
        if (str.length() > 10)
        {
            str = str.substr(0, 9);
            str += ".";
            std::cout << str << "|";
        }
        else
            std::cout << std::string(10 - str.length(), ' ') + str << "|";
        std::cout << "\n+----------+----------+----------+----------+\n";
    }
}

std::string setString(std::string message)
{
    std::string input;

    do
    {
        std::cout << message;
        std::getline(std::cin, input);

        if (!validateStr(input))
        {
            system("clear");
            std::cout << "Invalid String Input.\n";
        }
    } while (!validateStr(input));

    return input;
}

std::string setPhoneNumber(std::string message)
{
    std::string input;

    do
    {
        std::cout << message;
        std::getline(std::cin, input);

        if (!validatePhoneNumber(input))
        {
            system("clear");
            std::cout << "Invalid Phone Number.\n";
        }
    } while (!validatePhoneNumber(input));

    return input;
}