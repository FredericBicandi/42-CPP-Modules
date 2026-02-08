#include "Intern.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include <iostream>

Intern::Intern() {}
Intern::Intern(const Intern& other) { (void)other; }
Intern& Intern::operator=(const Intern& other) { (void)other; return *this; }
Intern::~Intern() {}

static AForm* createShrub(const std::string& target)
{
    return new ShrubberyCreationForm(target);
}

static AForm* createRobot(const std::string& target)
{
    return new RobotomyRequestForm(target);
}

static AForm* createPardon(const std::string& target)
{
    return new PresidentialPardonForm(target);
}

AForm* Intern::makeForm(const std::string& formName, const std::string& target) const
{
    struct FormPair {
        const char* name;
        AForm* (*create)(const std::string&);
    };

    FormPair forms[3] = {
        {"shrubbery creation", createShrub},
        {"robotomy request", createRobot},
        {"presidential pardon", createPardon}
    };

    for (int i = 0; i < 3; i++)
    {
        if (formName == forms[i].name)
        {
            std::cout << "Intern creates " << formName << "\n";
            return forms[i].create(target);
        }
    }

    std::cout << "Intern couldn’t find form: " << formName << "\n";
    return NULL;
}
