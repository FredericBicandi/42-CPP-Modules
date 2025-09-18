#include "../lib/HumanB.hpp"

HumanB::HumanB(std::string name) : weapon("unarmed")
{
    this->name = name;
}

void HumanB::setWeapon(Weapon weapon)
{
    this->weapon = weapon;
}

void HumanB::attack() const
{
    if (this->weapon.getType() == "unarmed")
        std::cout << this->name << " has no weapon to attack with" << std::endl;
    else
        std::cout << this->name << " attacks with their " << this->weapon.getType() << std::endl;
}

HumanB::~HumanB() {}
