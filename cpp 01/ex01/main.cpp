#include <iostream>
#include "Zombie.hpp"

int main()
{
    int N = 3;

    Zombie* horde = zombieHorde(N, "HordeMember");
    delete[] horde;
    return 0;
}