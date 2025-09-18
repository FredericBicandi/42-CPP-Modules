#include "../lib/Weapon.hpp"

Weapon::Weapon(std::string type) : type(type)
{
    return;
}

std::string Weapon::getType() const
{
    return this->type;
}

void Weapon::setType(std::string type)
{
    this->type = type;
}

Weapon::~Weapon()
{
    return;
}