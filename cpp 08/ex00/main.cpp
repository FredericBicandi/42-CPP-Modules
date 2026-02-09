#include <iostream>
#include <vector>
#include <list>
#include "easyfind.hpp"

int main()
{
    std::vector<int> v;
    v.push_back(1);
    v.push_back(5);
    v.push_back(10);

    try {
        std::vector<int>::iterator it = easyfind(v, 5);
        std::cout << "Found in vector: " << *it << "\n";
    }
    catch (std::exception& e) {
        std::cout << e.what() << "\n";
    }

    std::list<int> l;
    l.push_back(7);
    l.push_back(3);
    l.push_back(9);

    try {
        std::list<int>::iterator it = easyfind(l, 2);
        std::cout << "Found in list: " << *it << "\n";
    }
    catch (std::exception& e) {
        std::cout << e.what() << "\n";
    }

    return 0;
}
