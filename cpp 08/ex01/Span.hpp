#ifndef SPAN_HPP
#define SPAN_HPP

#include <vector>
#include <exception>

class Span
{
private:
    unsigned int maxN;
    std::vector<int> v;

public:
    Span();
    Span(unsigned int n);
    Span(const Span& other);
    Span& operator=(const Span& other);
    ~Span();

    void addNumber(int x);

    template <typename It>
    void addRange(It first, It last)
    {
        for (; first != last; ++first)
            addNumber(*first);
    }

    int shortestSpan() const;
    int longestSpan() const;

    class FullException : public std::exception {
    public:
        const char* what() const throw();
    };

    class NoSpanException : public std::exception {
    public:
        const char* what() const throw();
    };
};

#endif
