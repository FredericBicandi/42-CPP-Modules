#include "lib/Zombie.hpp"

int main()
{
    Zombie *z1 = newZombie("HeapZombie");
    z1->announce();
    randomChump("Zoulayfa");
 
    delete z1;
    return 0;
}