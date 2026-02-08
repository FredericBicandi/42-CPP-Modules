#include <iostream>
#include <string>
#include "iter.hpp"

template <typename T>
void print(const T &x)
{
    std::cout << x << "\n";
}

void addOne(int &x)
{
    x += 1;
}

int main()
{
    int a[] = {1, 2, 3};
    std::cout << "Print int array:\n";
    iter(a, 3, print<int>);

    std::cout << "Modify int array:\n";
    iter(a, 3, addOne);
    iter(a, 3, print<int>);

    const std::string s[] = {"aa", "bb", "cc"};
    std::cout << "Print const string array:\n";
    iter(s, 3, print<std::string>);

    return 0;
}
