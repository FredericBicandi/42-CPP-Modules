#include "../lib/Zombie.hpp"

Zombie::Zombie()
{
    std::cout << "New Zombie created." << std::endl;
}

void Zombie::announce() const
{
    std::cout << this->getZombieName() << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

std::string Zombie::getZombieName() const
{
    return this->name;
}

void Zombie::setZombieName(std::string name)
{
    this->name = name;
    return;
}

Zombie::~Zombie()
{
}