#include "../lib/FragTrap.hpp"

FragTrap::FragTrap(void) : ClapTrap("DefaultFrag")
{
    _hitPoints = 100;
    _energyPoints = 100;
    _attackDamage = 30;
    std::cout << "FragTrap Default constructor called" << std::endl;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
    _hitPoints = 100;
    _energyPoints = 100;
    _attackDamage = 30;
    std::cout << "FragTrap Parameterized constructor called" << std::endl;
}

FragTrap::~FragTrap(void)
{
    std::cout << "FragTrap Destructor called" << std::endl;
}

void FragTrap::attack(const std::string &target)
{
    if (_hitPoints <= 0 || _energyPoints <= 0)
    {
        std::cout << "FragTrap " << _name << " cannot attack." << std::endl;
        return;
    }
    _energyPoints--;
    std::cout << "FragTrap " << _name << " launches a crazy attack on " << target
              << ", dealing " << _attackDamage << " points of damage!" << std::endl;
}

void FragTrap::highFivesGuys(void)
{
    std::cout << "FragTrap " << _name << " requests a positive high five! ✋" << std::endl;
}
