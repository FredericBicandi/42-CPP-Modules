#include "iostream"
#include "lib/Contact.hpp"
#include "lib/PhoneBook.hpp"

void printWelcome()
{
    std::cout << "=====================================\n";
    std::cout << " Welcome to My Awesome PhoneBook! 📖\n";
    std::cout << "=====================================\n";
}

void printUsage()
{

    std::cout << "Available commands:\n";
    std::cout << "  ADD    - Save a new contact\n";
    std::cout << "  SEARCH - Display and inspect contacts\n";
    std::cout << "  EXIT   - Quit the program\n";
    std::cout << "-------------------------------------\n";
    std::cout << "Please enter one of the above commands:";
}

int main()
{
    std::string input;

    while (1)
    {
        printWelcome();
        printUsage();
        std::cin >> input;
        if (input == "EXIT")
            break;
    }
    return 0;
}
