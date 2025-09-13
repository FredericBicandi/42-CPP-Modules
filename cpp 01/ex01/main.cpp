#include "lib/Zombie.hpp"

int main(void)
{
    int N;

    N = 3;
    Zombie *horde = zombieHorde(N, "HordeMember");
    randomChump("SingleZombie");

    delete[] horde;
    return 0;
}