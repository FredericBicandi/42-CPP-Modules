#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat()
{
    std::cout << "default constructor called!";
}

Bureaucrat::Bureaucrat(const std::string name, int grade) : name(name), grade(grade)
{
    std::cout << "copy constructor called!";
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &source)
{
    std::cout << "Operator equal overload";
    if (this != &source)
        this->grade = source.grade;
}

std::string Bureaucrat::getName() const
{
    return (this->name);
}
int Bureaucrat::getGrade() const
{
    return (this->grade);
}

void Bureaucrat::increamentGrade()
{
    if (this->grade <= 1)
        throw GradeTooHighException();
    this->grade -= 1;
}
void Bureaucrat::decreamentGrade()
{
    if (grade >= 150)
        throw GradeTooLowException();
    this->grade += 1;
}

const char *Bureaucrat::GradeTooHighException::what() const throw()
{
    return "Grade too high";
}
const char *Bureaucrat::GradeTooLowException::what() const throw()
{
    return "Grade too low";
}

std::ostream &operator<<(std::ostream &os, Bureaucrat const &obj)
{
    os << obj.getName() << "bureaucrat grade" << obj.getGrade();
    return (os);
}

Bureaucrat::~Bureaucrat()
{
    std::cout << "Destructor has been called!";
}