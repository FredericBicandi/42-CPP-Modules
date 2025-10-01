#include "lib/Animal.hpp"
#include "lib/Dog.hpp"
#include "lib/Cat.hpp"
#include "lib/WrongAnimal.hpp"
#include "lib/WrongCat.hpp"
#include <iostream>

int main()
{
    std::cout << "=== Abstract Animal + Polymorphism test ===" << std::endl;

    // Animal a; // <-- WILL NOT COMPILE: Animal is abstract
    const Animal *animals[4];

    // first half Dogs, second half Cats
    for (int i = 0; i < 4; ++i)
    {
        if (i < 2)
            animals[i] = new Dog();
        else
            animals[i] = new Cat();
    }

    std::cout << "\n-- make sounds --\n";
    for (int i = 0; i < 4; ++i)
        animals[i]->makeSound();

    std::cout << "\n-- deep copy test --\n";
    Dog *d0 = dynamic_cast<Dog *>(const_cast<Animal *>(animals[0]));
    if (d0)
    {
        d0->getBrain()->setIdea(0, "Bone!");
        Dog copyDog(*d0); // deep copy
        std::cout << "original idea 0: " << d0->getBrain()->getIdea(0) << std::endl;
        std::cout << "copy idea 0:     " << copyDog.getBrain()->getIdea(0) << std::endl;

        d0->getBrain()->setIdea(0, "Big bone!");
        std::cout << "after change original idea 0: " << d0->getBrain()->getIdea(0) << std::endl;
        std::cout << "after change copy idea 0:     " << copyDog.getBrain()->getIdea(0) << std::endl;
    }

    std::cout << "\n-- cleanup animals --\n";
    for (int i = 0; i < 4; ++i)
        delete animals[i];

    std::cout << "\n=== WrongAnimal (no virtual) test ===" << std::endl;
    const WrongAnimal *wa = new WrongAnimal();
    const WrongAnimal *wc = new WrongCat();

    std::cout << "wa->type = " << wa->getType() << std::endl;
    std::cout << "wc->type = " << wc->getType() << std::endl;

    wa->makeSound();
    wc->makeSound(); // calls WrongAnimal::makeSound() because not virtual

    delete wa;
    delete wc;

    std::cout << "\n=== done ===" << std::endl;
    return 0;
}
