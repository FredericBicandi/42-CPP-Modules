#include "include/violence.h"

int main(void)
{
    Weapon weapon = Weapon("AK-47");
    {
        HumanA bob("Bob", weapon);
        bob.attack();
    }

    {
        std::cout << "-------------------------" << std::endl;
        HumanB Freddy("Freddy");
        Freddy.attack();
        weapon.setType("Desert Eagle");
        Freddy.setWeapon(weapon);
        Freddy.attack();
    }
    return 0;
}