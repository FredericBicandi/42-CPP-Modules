#include "includes/program.h"

int main()
{
    char index;
    std::string input;
    PhoneBook phoneBook;

    system("clear");
    printWelcome();
    while (true)
    {
        printUsage();

        if (!std::getline(std::cin, input)) break;
        if (input.empty())
        {
            system("clear");
            continue;
        }

        if (input == "ADD")
        {
            phoneBook.add();
        }
        else if (input == "SEARCH")
        {
            system("clear");
            printAllContacts(phoneBook);

            if (!preValidation(index - '0', phoneBook))
                continue;

            std::cout << "Enter the index of the contact to view details: ";
            std::cin >> index;
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            system("clear");

            if (!postValidation(index, phoneBook))
                continue;

            phoneBook.setIndex(index - '0');
            phoneBook.search();
            continue;
        }
        else if (input == "EXIT")
        {
            phoneBook.exit();
            break;
        }
        else
        {
            system("clear");
            std::cout << "Invalid command. Please try again.\n";
        }
    }
    return 0;
}
