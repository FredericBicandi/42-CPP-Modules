#include "Base.hpp"
#include <iostream>
#include <cstdlib>
#include <ctime>

Base* generate(void);
void identify(Base* p);
void identify(Base& p);

int main()
{
    std::srand(std::time(NULL));

    Base* p = generate();

    std::cout << "identify(ptr): ";
    identify(p);

    std::cout << "identify(ref): ";
    identify(*p);

    delete p;
    return 0;
}
