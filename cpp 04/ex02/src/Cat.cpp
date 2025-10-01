#include "../lib/Cat.hpp"

Cat::Cat() : brain(new Brain())
{
    type = "Cat";
    std::cout << "Cat constructor called" << std::endl;
}

Cat::Cat(const Cat &other) : Animal(other), brain(new Brain(*(other.brain)))
{
    type = other.type;
    std::cout << "Cat copy constructor called (deep copy)" << std::endl;
}

Cat &Cat::operator=(const Cat &other)
{
    std::cout << "Cat copy assignment called" << std::endl;
    if (this != &other)
    {
        this->type = other.type;
        if (brain)
            delete brain;
        brain = new Brain(*(other.brain));
    }
    return *this;
}

Cat::~Cat()
{
    delete brain;
    std::cout << "Cat destructor called" << std::endl;
}

void Cat::makeSound() const
{
    std::cout << "Meow! Meow!" << std::endl;
}

Brain *Cat::getBrain() const
{
    return brain;
}
