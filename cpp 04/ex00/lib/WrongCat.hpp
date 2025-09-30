#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP

#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
public:
    WrongCat();
    WrongCat(const WrongCat &other);
    WrongCat &operator=(const WrongCat &rhs);
    ~WrongCat();

    void makeSound() const; // overrides, but won't be called through WrongAnimal*
};

#endif
