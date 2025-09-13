#include "../lib/HumanA.hpp"

HumanA::HumanA(std::string name, Weapon weapon) : weapon(weapon)
{
    this->weapon = weapon;
    this->name = name;
    std::cout << "HumanA created" << std::endl;
}

HumanA::~HumanA() {}