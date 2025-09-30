#include "../lib/Dog.hpp"

Dog::Dog() : Animal()
{
    this->type = "Dog";
    std::cout << "Dog default constructor called" << std::endl;
}
Dog::Dog(const Dog &other) : Animal(other)
{
    std::cout << "Dog copy constructor called" << std::endl;
}
Dog &Dog::operator=(const Dog &rhs)
{
    std::cout << "Dog copy assignment operator called" << std::endl;

    if (this != &rhs)
    {
        Animal::operator=(rhs);
    }
    return *this;
}
Dog::~Dog()
{
    std::cout << "Dog destructor called" << std::endl;
}
void Dog::makeSound() const
{
    std::cout << "Woof" << std::endl;
}