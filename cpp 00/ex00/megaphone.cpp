#include <iostream>
#include <cstring>
#include <stdio.h>

int main(int argc, char *argv[])
{
    if (argc < 2)
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
    if (argc >= 2)
    {
        for (int i = 1; i < argc; i++)
        {
            for (int j = 0; i < argv[i][j]; j++)
                std::cout << (char)toupper(argv[i][j]);
            std::cout << " ";
        }
    }
    std::cout << "\n";
    return (0);
}
