#include "../lib/HumanA.hpp"

HumanA::HumanA(std::string name, Weapon weapon) : weapon(weapon)
{
    this->weapon = weapon;
    this->name = name;
}

void HumanA::attack() const
{
    std::cout << this->name << " attacks with their " << this->weapon.getType() << std::endl;
}

HumanA::~HumanA() {}