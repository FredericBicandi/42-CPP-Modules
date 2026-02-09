#include "Span.hpp"
#include <algorithm>
#include <limits>

Span::Span() : maxN(0), v() {}

Span::Span(unsigned int n) : maxN(n), v()
{
    v.reserve(n);
}

Span::Span(const Span& other) : maxN(other.maxN), v(other.v) {}

Span& Span::operator=(const Span& other)
{
    if (this != &other)
    {
        maxN = other.maxN;
        v = other.v;
    }
    return *this;
}

Span::~Span() {}

void Span::addNumber(int x)
{
    if (v.size() >= maxN)
        throw FullException();
    v.push_back(x);
}

int Span::shortestSpan() const
{
    if (v.size() < 2)
        throw NoSpanException();

    std::vector<int> tmp(v);
    std::sort(tmp.begin(), tmp.end());

    int best = std::numeric_limits<int>::max();
    for (size_t i = 1; i < tmp.size(); ++i)
    {
        int diff = tmp[i] - tmp[i - 1];
        if (diff < best)
            best = diff;
    }
    return best;
}

int Span::longestSpan() const
{
    if (v.size() < 2)
        throw NoSpanException();

    std::vector<int>::const_iterator mn = std::min_element(v.begin(), v.end());
    std::vector<int>::const_iterator mx = std::max_element(v.begin(), v.end());
    return *mx - *mn;
}

const char* Span::FullException::what() const throw()
{
    return "Span is full";
}

const char* Span::NoSpanException::what() const throw()
{
    return "Not enough elements to compute span";
}
