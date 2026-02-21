#include <iostream>

int main(int argc, char *argv[])
{
    if (argc != 2)
    {
        std::cout << "no input file provided" << std::endl;
        return (1);
    }

    return (0);
}