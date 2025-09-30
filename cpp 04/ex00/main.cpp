#include "lib/Animal.hpp"
#include "lib/Dog.hpp"
#include "lib/Cat.hpp"
#include "lib/WrongAnimal.hpp"
#include "lib/WrongCat.hpp"

int main()
{
    const Animal* meta = new Animal();
    const Animal* j = new Dog();
    const Animal* i = new Cat();

    std::cout << j->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl;
    i->makeSound();
    j->makeSound();
    meta->makeSound();

    delete meta;
    delete j;
    delete i;

    std::cout << "---- wrong animals ----" << std::endl;
    const WrongAnimal* wa = new WrongAnimal();
    const WrongAnimal* wc = new WrongCat();

    wc->makeSound();
    wa->makeSound();

    delete wa;
    delete wc;
    return 0;
}
