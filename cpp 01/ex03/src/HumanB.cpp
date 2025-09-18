#include "../lib/HumanB.hpp"

HumanB::HumanB(std::string name) : name(name), weapon(*(new Weapon("unarmed")))
{
    std::cout << this->name << " spawned without a weapon" << std::endl;
    return;
}

void HumanB::attack() const
{
    if (this->weapon.getType() == "unarmed")
        std::cout << this->name << " is unarmed and cannot attack" << std::endl;
    else
        std::cout << this->name << " attacks with his " << this->weapon.getType() << std::endl;
    return;
}

void HumanB::setWeapon(Weapon &Weapon)
{
    this->weapon = Weapon;
    return;
}

HumanB::~HumanB()
{
    std::cout << this->name << " has been destroyed" << std::endl;
    return;
}