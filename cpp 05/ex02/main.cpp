#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include <iostream>
#include <cstdlib>
#include <ctime>

int main()
{
    std::srand(std::time(NULL));

    Bureaucrat boss("Boss", 1);
    Bureaucrat mid("Mid", 50);
    Bureaucrat low("Low", 150);

    ShrubberyCreationForm shrub("home");
    RobotomyRequestForm robot("Bender");
    PresidentialPardonForm pardon("Arthur");

    std::cout << "=== Initial ===\n";
    std::cout << boss;
    std::cout << mid;
    std::cout << low;

    std::cout << shrub;
    std::cout << robot;
    std::cout << pardon;

    std::cout << "\n=== Execute unsigned (should fail) ===\n";
    boss.executeForm(shrub);

    std::cout << "\n=== Signing ===\n";
    low.signForm(shrub);   // will fail (needs 145)
    mid.signForm(shrub);   // should sign
    low.signForm(robot);   // fail (needs 72)
    mid.signForm(robot);   // sign (50 <= 72)
    mid.signForm(pardon);  // fail (needs 25)
    boss.signForm(pardon); // sign

    std::cout << "\n=== Execute ===\n";
    low.executeForm(shrub);   // fail (exec 137)
    mid.executeForm(shrub);   // success -> creates file

    mid.executeForm(robot);   // fail (exec 45)
    boss.executeForm(robot);  // success (50%)

    boss.executeForm(pardon); // success

    std::cout << "\n=== Invalid Bureaucrat grade ===\n";
    try { Bureaucrat bad("Bad", 0); }
    catch (std::exception& e) { std::cout << e.what() << "\n"; }

    try { Bureaucrat bad2("Bad2", 151); }
    catch (std::exception& e) { std::cout << e.what() << "\n"; }

    return 0;
}
