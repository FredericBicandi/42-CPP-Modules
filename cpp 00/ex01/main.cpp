#include "iostream"

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
    return 0;
}