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
    std::cout << "---------------------------------\n";
    std::cout << "|     Index|First Name| Last Name|\n";
    std::cout << "----------------------------------\n";

    while (++i <= book.getCounter())
    {
        std::cout << "|     " << i << "|";
        std::cout << book.contacts[i].getFirstName() << " ";
        std::cout << " " << book.contacts[i].getLastName() << " ";
        std::cout << "  " << book.contacts[i].getnickName() << "     " << std::endl;
        std::cout << "----------------------------------\n";
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