#include "lib/ClapTrap.hpp"
#include "lib/ScavTrap.hpp"

int main(void)
{
    ClapTrap clap("Clappy");
    ScavTrap scav("Scavvy");

    clap.attack("Target1");
    clap.takeDamage(3);
    clap.beRepaired(2);

    std::cout << std::endl;
    scav.attack("Target2");
    scav.takeDamage(20);
    scav.beRepaired(10);
    scav.guardGate();
    return 0;
}
