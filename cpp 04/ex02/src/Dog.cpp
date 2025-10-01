#include "../lib/Dog.hpp"

Dog::Dog() : brain(new Brain())
{
    type = "Dog";
    std::cout << "Dog constructor called" << std::endl;
}

Dog::Dog(const Dog &other) : Animal(other), brain(new Brain(*(other.brain)))
{
    type = other.type;
    std::cout << "Dog copy constructor called (deep copy)" << std::endl;
}

Dog &Dog::operator=(const Dog &other)
{
    std::cout << "Dog copy assignment called" << std::endl;
    if (this != &other)
    {
        this->type = other.type;
        if (brain)
            delete brain;
        brain = new Brain(*(other.brain));
    }
    return *this;
}

Dog::~Dog()
{
    delete brain;
    std::cout << "Dog destructor called" << std::endl;
}

void Dog::makeSound() const
{
    std::cout << "Woof! Woof!" << std::endl;
}

Brain *Dog::getBrain() const
{
    return brain;
}
