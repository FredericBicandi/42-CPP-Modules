#include "lib/Animal.hpp"
#include "lib/Dog.hpp"
#include "lib/Cat.hpp"
#include "lib/Brain.hpp"
#include "lib/WrongAnimal.hpp"
#include "lib/WrongCat.hpp"
#include <iostream>

int main()
{
    const int N = 4;
    Animal *arr[N];

    for (int i = 0; i < N; ++i)
    {
        if (i < N / 2)
            arr[i] = new Dog();
        else
            arr[i] = new Cat();
    }

    std::cout << "\n-- fill some ideas --\n";
    Dog *d0 = dynamic_cast<Dog *>(arr[0]);
    if (d0)
        d0->getBrain()->setIdea(0, "I want a bone");
    Cat *c2 = dynamic_cast<Cat *>(arr[2]);
    if (c2)
        c2->getBrain()->setIdea(0, "I want to sleep");

    std::cout << "\n-- copy tests (deep copy) --\n";
    Dog *dcopy = new Dog(*(d0)); // copy constructor
    std::cout << "Original Dog idea[0]: " << d0->getBrain()->getIdea(0) << std::endl;
    std::cout << "Copied Dog idea[0]:   " << dcopy->getBrain()->getIdea(0) << std::endl;

    std::cout << "\n-- mutate original idea and show copy unaffected --\n";
    d0->getBrain()->setIdea(0, "I want a bigger bone");
    std::cout << "Original Dog idea[0]: " << d0->getBrain()->getIdea(0) << std::endl;
    std::cout << "Copied Dog idea[0]:   " << dcopy->getBrain()->getIdea(0) << std::endl;

    delete dcopy;

    std::cout << "\n-- cleanup animals --\n";
    for (int i = 0; i < N; ++i)
        delete arr[i];

    std::cout << "\n-- done --\n";
    return 0;
}
