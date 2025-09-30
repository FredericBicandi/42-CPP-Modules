#include "../lib/HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon) : name(name), weapon(weapon)
{
    std::cout << this->name << " spawned with a " << this->weapon.getType() << std::endl;
    return;
}

void HumanA::attack() const
{
    std::cout << this->name << " attacks with their " << this->weapon.getType() << std::endl;
    return;
}

HumanA::~HumanA()
{
    std::cout << this->name << "has been destroyed" << std::endl;
    return;
}