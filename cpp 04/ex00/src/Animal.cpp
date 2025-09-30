#include "../lib/Animal.hpp"

Animal::Animal() : type("Animal")
{
    std::cout << "Animal default constructor called" << std::endl;
}
Animal::Animal(const Animal &other) : type(other.type)
{
    std::cout << "Animal copy constructor called" << std::endl;
}
Animal &Animal::operator=(const Animal &rhs)
{
    std::cout << "Animal copy assignment operator called" << std::endl;
    if (this != &rhs)
    {
        this->type = rhs.type;
    }
    return *this;
}
Animal::~Animal()
{
    std::cout << "Animal destructor called" << std::endl;
}

void Animal::makeSound() const
{
    std::cout << "*generic animal sound*" << std::endl;
}
std::string Animal::getType() const
{
    return this->type;
}
