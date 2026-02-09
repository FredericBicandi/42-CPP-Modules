#include "Span.hpp"
#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>

int main()
{
    {
        Span sp(5);
        sp.addNumber(6);
        sp.addNumber(3);
        sp.addNumber(17);
        sp.addNumber(9);
        sp.addNumber(11);

        std::cout << sp.shortestSpan() << std::endl;
        std::cout << sp.longestSpan() << std::endl;
    }

    {
        std::srand(std::time(NULL));
        const int N = 10000;

        Span big(N);
        std::vector<int> vals;
        vals.reserve(N);

        for (int i = 0; i < N; ++i)
            vals.push_back(std::rand());

        big.addRange(vals.begin(), vals.end());

        std::cout << "big shortest: " << big.shortestSpan() << std::endl;
        std::cout << "big longest: " << big.longestSpan() << std::endl;
    }

    return 0;
}
