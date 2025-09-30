#include "../lib/ClapTrap.hpp"

ClapTrap::ClapTrap(void) : _name("Default"), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
    std::cout << "ClapTrap Default constructor called" << std::endl;
    return;
}
ClapTrap::ClapTrap(std::string name) : _name(name), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
    std::cout << "ClapTrap Parameterized constructor called" << std::endl;
    return;
}
ClapTrap::~ClapTrap(void)
{
    std::cout << "ClapTrap Destructor called" << std::endl;
    return;
}

void ClapTrap::attack(const std::string &target)
{
    if (_hitPoints <= 0 || _energyPoints <= 0)
    {
        std::cout << "ClapTrap " << _name << " cannot attack." << std::endl;
        return;
    }
    _energyPoints--;
    std::cout << "ClapTrap " << _name << " attacks " << target
              << ", causing " << _attackDamage << " points of damage!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
    if (_hitPoints <= 0)
    {
        std::cout << "ClapTrap " << _name << " is already dead!" << std::endl;
        return;
    }
    _hitPoints -= amount;
    if (_hitPoints < 0) _hitPoints = 0;
    std::cout << "ClapTrap " << _name << " takes " << amount
              << " points of damage! Remaining HP: " << _hitPoints << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if (_hitPoints <= 0 || _energyPoints <= 0)
    {
        std::cout << "ClapTrap " << _name << " cannot repair itself." << std::endl;
        return;
    }
    _energyPoints--;
    _hitPoints += amount;
    std::cout << "ClapTrap " << _name << " is repaired by " << amount
              << " points! Current HP: " << _hitPoints << std::endl;
}


std::string ClapTrap::getName(void) const
{
    return (this->_name);
}

int ClapTrap::getHitPoints(void) const
{
    return (this->_hitPoints);
}
int ClapTrap::getEnergyPoints(void) const
{
    return (this->_energyPoints);
}
int ClapTrap::getAttackDamage(void) const
{
    return (this->_attackDamage);
}