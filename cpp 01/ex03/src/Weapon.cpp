#include "../lib/Weapon.hpp"

Weapon::Weapon(std::string type)
{
    this->type = type;
    std::cout << "Weapon created" << std::endl;
}

void Weapon::setType(std::string type)
{
    this->type = type;
}

std::string Weapon::getType() const
{
    return this->type;
}