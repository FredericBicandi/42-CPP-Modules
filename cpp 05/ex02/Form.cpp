#include "Form.hpp"
#include "Bureaucrat.hpp"

Form::Form()
    : name("default"),
      isSigned(false),
      gradeToSign(150),
      gradeToExecute(150)
{
}
Form::Form(const std::string &name, int gradeToSign, int gradeToExecute)
    : name(name),
      isSigned(false),
      gradeToSign(gradeToSign),
      gradeToExecute(gradeToExecute)
{
    if (gradeToSign < 1 || gradeToExecute < 1)
        throw GradeTooHighException();
    if (gradeToSign > 150 || gradeToExecute > 150)
        throw GradeTooLowException();
}

Form::Form(const Form &other)
    : name(other.name),
      isSigned(other.isSigned),
      gradeToSign(other.gradeToSign),
      gradeToExecute(other.gradeToExecute)
{
    std::cout << "copy contructor called" << std::endl;
}

Form &Form::operator=(const Form &source)
{
    if (this != &source)
        this->isSigned = source.isSigned;
    return (*this);
}
Form::~Form()
{
}

const std::string &Form::getName() const { return name; }
bool Form::getisSigned() const { return isSigned; }
int Form::getGradeToSgin() const { return gradeToSign; }
int Form::getGradeToExecute() const { return gradeToExecute; }

void Form::beSigned(const Bureaucrat &b)
{
    if (b.getGrade() > gradeToSign)
        throw GradeTooLowException();
    isSigned = true;
}

const char *Form::GradeTooHighException::what() const throw()
{
    return "Form grade too high";
}

const char *Form::GradeTooLowException::what() const throw()
{
    return "Form grade too low";
}

std::ostream &operator<<(std::ostream &os, const Form &f)
{
    os << "Form \"" << f.getName() << "\""
       << " | signed: " << (f.getisSigned() ? "yes" : "no")
       << " | grade to sign: " << f.getGradeToSgin()
       << " | grade to execute: " << f.getGradeToExecute()
       << "\n";
    return os;
}