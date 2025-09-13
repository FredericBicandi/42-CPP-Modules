#include "../includes/program.h"

bool preValidation(int index, PhoneBook book)
{
    (void)index;
    if (book.getCounter() == -1)
    {
        system("clear");
        std::cout << "No contacts available. Please add a contact first." << std::endl;
        return (false);
    }
    return (true);
}
bool postValidation(char index, PhoneBook book)
{
    if ((index < '0' || index > '7') && !isdigit(index))
    {
        system("clear");
        std::cout << "Invalid input. Please enter a number.\n";
        return (false);
    }
    else if (index - '0' > book.getCounter())
    {
        system("clear");
        std::cout << "No contact found at this index. Please try again.\n";
        return (false);
    }
    return (true);
}

bool validateStr(std::string str)
{
    if (str.empty())
        return (false);
    for (size_t i = 0; i < str.length(); i++)
    {
        if (!(str[i] == ' ' || str[i] == '-' || str[i] == '_') && !isalpha(str[i]))
            return (false);
    }
    return (true);
}

bool validatePhoneNumber(std::string str)
{
    if (str.empty() || (str.length() < 5 || str.length() > 15))
        return (false);
    for (size_t i = 0; i < str.length(); i++)
    {
        if (!isdigit(str[i]) && str[i] != '+' && str[i] != '-' && str[i] != ' ')
            return (false);
    }
    return (true);
}