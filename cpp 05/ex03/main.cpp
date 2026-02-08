#include "Intern.hpp"
#include "Bureaucrat.hpp"
#include <iostream>
#include <cstdlib>
#include <ctime>

int main()
{
    std::srand(std::time(NULL));

    Intern intern;

    std::cout << "\n=== Intern creates forms ===\n";
    AForm* shrub = intern.makeForm("shrubbery creation", "home");
    AForm* robot = intern.makeForm("robotomy request", "Bender");
    AForm* pardon = intern.makeForm("presidential pardon", "Arthur");
    AForm* wrong = intern.makeForm("coffee request", "Nobody");

    Bureaucrat boss("Boss", 1);
    Bureaucrat mid("Mid", 50);
    Bureaucrat low("Low", 150);

    std::cout << "\n=== Signing ===\n";
    if (shrub) mid.signForm(*shrub);
    if (robot) mid.signForm(*robot);
    if (pardon) boss.signForm(*pardon);

    std::cout << "\n=== Execute ===\n";
    if (shrub) mid.executeForm(*shrub);
    if (robot) boss.executeForm(*robot);
    if (pardon) boss.executeForm(*pardon);

    std::cout << "\n=== Cleanup ===\n";
    delete shrub;
    delete robot;
    delete pardon;
    delete wrong;

    return 0;
}
