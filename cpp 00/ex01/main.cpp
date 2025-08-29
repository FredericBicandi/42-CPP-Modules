#include "iostream"
#include "lib/Contact.hpp"

void printUsage()
{
    std::cout << "=====================================\n";
    std::cout << " Welcome to My Awesome PhoneBook! 📖\n";
    std::cout << "=====================================\n";
    std::cout << "Available commands:\n";
    std::cout << "  ADD    - Save a new contact\n";
    std::cout << "  SEARCH - Display and inspect contacts\n";
    std::cout << "  EXIT   - Quit the program\n";
    std::cout << "-------------------------------------\n";
    std::cout << "Please enter one of the above commands:\n";
}

int main()
{
    printUsage();
    Contact mycontact;

    // Call setters
    mycontact.setFirstName("Freddy");
    mycontact.setLastName("Bicandy");

    // Call getters
    std::cout << "First Name: " << mycontact.getFirstName() << "\n";
    std::cout << "Last Name: " << mycontact.getLastName() << "\n";
    return 0;
}
