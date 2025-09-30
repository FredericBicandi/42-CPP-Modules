#include "include/violence.h"

int main(void)
{
    {
        Weapon club = Weapon("crude spiked club");
        std::cout << club.getType() << std::endl;
        club.setType("some other type of club");
        std::cout << club.getType() << std::endl;
    }
    std::cout << "-------------------------------------" << std::endl;
    {
        Weapon knife = Weapon("Butterfly Knife");
        HumanA bob("Bob", knife);
        bob.attack();
        knife.setType("Katana");
        bob.attack();
    }
    std::cout << "-------------------------------------" << std::endl;
    {
        Weapon GospelWeapon = Weapon("Sword of Damocles");
        HumanB Fred("Fred");
        Fred.setWeapon(&GospelWeapon);
        Fred.attack(); 
    }
    return 0;
}