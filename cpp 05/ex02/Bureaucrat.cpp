#include "Bureaucrat.hpp"
#include "Form.hpp"

Bureaucrat::Bureaucrat() : name("default"), grade(150)
{
    std::cout << "default constructor called" << std::endl;
}
Bureaucrat::Bureaucrat(const Bureaucrat &other) : name(other.name), grade(other.grade)
{
    std::cout << "coopy default constructor called" << std::endl;
}
Bureaucrat::Bureaucrat(const std::string &name, int grade) : name(name), grade(grade)
{
    std::cout << "constructor called" << std::endl;
    if (grade < 1)
        throw GradeTooHighException();
    if (grade > 150)
        throw GradeTooLowException();
}
Bureaucrat &Bureaucrat::operator=(const Bureaucrat &other)
{
    std::cout << "operator oveload constructor called" << std::endl;

    if (this != &other)
        grade = other.grade;
    return *this;
}
Bureaucrat::~Bureaucrat()
{
    std::cout << "destructor called" << std::endl;
}

const std::string &Bureaucrat::getName() const
{
    return name;
}
int Bureaucrat::getGrade() const
{
    return grade;
}

void Bureaucrat::incrementGrade()
{
    if (grade <= 1)
        throw GradeTooHighException();
    grade--;
}
void Bureaucrat::decrementGrade()
{
    if (grade >= 150)
        throw GradeTooLowException();
    grade++;
}

void Bureaucrat::signForm(Form &f) const
{
    try
    {
        f.beSigned(*this);
        std::cout << name << " signed " << f.getName() << "\n";
    }
    catch (std::exception &e)
    {
        std::cout << name << " couldn’t sign " << f.getName() << " because " << e.what() << ".\n";
    }
}

const char *Bureaucrat::GradeTooHighException::what() const throw()
{
    return "Grade too high";
}
const char *Bureaucrat::GradeTooLowException::what() const throw()
{
    return "Grade too low";
}

std::ostream &operator<<(std::ostream &os, const Bureaucrat &obj)
{
    os << obj.getName()
       << ", bureaucrat grade "
       << obj.getGrade()
       << ".\n";
    return os;
}
