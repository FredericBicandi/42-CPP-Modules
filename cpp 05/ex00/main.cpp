#include "Bureaucrat.hpp"
#include <iostream>

int main()
{
    std::cout << "=== Valid Bureaucrats ===\n";
    try
    {
        Bureaucrat a("Alice", 42);
        Bureaucrat b("Bob", 1);
        Bureaucrat c("Charlie", 150);

        std::cout << a;
        std::cout << b;
        std::cout << c;
    }
    catch (std::exception& e)
    {
        std::cout << "Exception: " << e.what() << "\n";
    }

    std::cout << "\n=== Invalid Construction ===\n";

    try
    {
        Bureaucrat x("TooHigh", 0);
        std::cout << x;
    }
    catch (std::exception& e)
    {
        std::cout << "Exception: " << e.what() << "\n";
    }

    try
    {
        Bureaucrat y("TooLow", 151);
        std::cout << y;
    }
    catch (std::exception& e)
    {
        std::cout << "Exception: " << e.what() << "\n";
    }

    std::cout << "\n=== Increment / Decrement ===\n";

    try
    {
        Bureaucrat z("Zack", 2);
        std::cout << z;

        z.incrementGrade(); // 2 -> 1
        std::cout << z;

        z.incrementGrade(); // should throw
    }
    catch (std::exception& e)
    {
        std::cout << "Exception: " << e.what() << "\n";
    }

    try
    {
        Bureaucrat w("Will", 149);
        std::cout << w;

        w.decrementGrade(); // 149 -> 150
        std::cout << w;

        w.decrementGrade(); // should throw
    }
    catch (std::exception& e)
    {
        std::cout << "Exception: " << e.what() << "\n";
    }

    return 0;
}
