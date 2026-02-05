#include "Bureaucrat.hpp"
#include "Form.hpp"
#include <iostream>

int main()
{
    std::cout << "=== Create Bureaucrats and Forms ===\n";
    Bureaucrat boss("Boss", 1);
    Bureaucrat intern("Intern", 150);

    Form easy("EasyForm", 150, 150);
    Form hard("HardForm", 1, 1);

    std::cout << boss;
    std::cout << intern;
    std::cout << easy;
    std::cout << hard;

    std::cout << "\n=== Signing ===\n";
    intern.signForm(easy); // should sign
    std::cout << easy;

    intern.signForm(hard); // should fail
    boss.signForm(hard);   // should sign
    std::cout << hard;

    std::cout << "\n=== Invalid Form Construction ===\n";
    try
    {
        Form bad1("Bad1", 0, 10);
        std::cout << bad1;
    }
    catch (std::exception& e)
    {
        std::cout << "Exception: " << e.what() << "\n";
    }

    try
    {
        Form bad2("Bad2", 10, 151);
        std::cout << bad2;
    }
    catch (std::exception& e)
    {
        std::cout << "Exception: " << e.what() << "\n";
    }

    return 0;
}
