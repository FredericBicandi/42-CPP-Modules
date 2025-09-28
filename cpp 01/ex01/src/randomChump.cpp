#include "../lib/Zombie.hpp"

void randomChump(std::string name)
{
    Zombie chump;
    chump.setZombieName(name);
    chump.announce();
    return;
}