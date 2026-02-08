#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <exception>

template <typename T>
class Array
{
    private:
        T *data;
        unsigned int n;

    public:
        Array() : data(NULL), n(0) {}
        Array(unsigned int n) : data(NULL), n(n)
        {
            if (n > 0)
                data = new T[n]();
        }
        Array(const Array &other) : data(NULL), n(other.n)
        {
            if (n > 0)
            {
                data = new T[n];
                for (unsigned int i = 0; i < n; i++)
                    data[i] = other.data[i];
            }
        }
        Array &operator=(const Array &other)
        {
            if (this != &other)
            {
                delete[] data;
                n = other.n;
                data = NULL;

                if (n > 0)
                {
                    data = new T[n];
                    for (unsigned int i = 0; i < n; i++)
                        data[i] = other.data[i];
                }
            }
            return *this;
        }
        ~Array()
        {
            delete[] data;
        }

        unsigned int size() const
        {
            return n;
        }
        class OutOfBounds : public std::exception
        {
            public:
            const char *what() const throw() { return "Index out of bounds"; }
        };
        T &operator[](unsigned int index)
        {
            if (index >= n)
                throw OutOfBounds();
            return data[index];
        }
        const T &operator[](unsigned int index) const
        {
            if (index >= n)
                throw OutOfBounds();
            return data[index];
        }
};

#endif
