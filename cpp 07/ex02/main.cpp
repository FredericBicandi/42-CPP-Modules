#include <iostream>
#include <string>
#include "Array.hpp"

int main()
{
    Array<int> a(3);
    a[0] = 10;
    a[1] = 20;
    a[2] = 30;

    std::cout << "a size: " << a.size() << "\n";
    for (unsigned int i = 0; i < a.size(); i++)
        std::cout << "a[" << i << "]=" << a[i] << "\n";

    Array<int> b = a; // copy
    b[1] = 999;

    std::cout << "after modifying b:\n";
    std::cout << "a[1]=" << a[1] << " (should be 20)\n";
    std::cout << "b[1]=" << b[1] << " (should be 999)\n";

    try
    {
        std::cout << a[10] << "\n";
    }
    catch (std::exception &e)
    {
        std::cout << "Exception: " << e.what() << "\n";
    }

    Array<std::string> s(2);
    s[0] = "hello";
    s[1] = "world";
    std::cout << s[0] << " " << s[1] << "\n";

    return 0;
}
