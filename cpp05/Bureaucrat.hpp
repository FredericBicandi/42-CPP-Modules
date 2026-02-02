#ifndef BUREAUCART_HPP
#define BUREAUCART_HPP

#include <iostream>

class Bureaucrat
{
    private:
        const std::string name;
        int grade;
    public:
        Bureaucrat();
        Bureaucrat(const std::string name, int grade);
        Bureaucrat& operator=(const Bureaucrat &source);
        ~Bureaucrat();
        
        void setname(const std::string name);
        void setGrade(int grade);

        std::string getName() const;
        int getGrade() const;
         
        void increamentGrade();
        void decreamentGrade();

        class GradeTooLowException :public std::exception
        {
            public:
                const char *what() const throw();
        };
        class GradeTooHighException :public std::exception
        {
            public:
                const char *what() const throw();
        };
        ~Bureaucrat();
};

std::ostream& operator<<(std::ostream &os,Bureaucrat const &obj);
#endif