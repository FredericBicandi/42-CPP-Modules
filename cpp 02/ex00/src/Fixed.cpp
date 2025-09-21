#include "../lib/Fixed.hpp"

Fixed::Fixed() : _fixedPointValue(0)
{
    std::cout << "Default constructor called" << std::endl;
    return;
}

Fixed::Fixed(const Fixed &src)
{
    std::cout << "Copy constructor called" << std::endl;
    this->_fixedPointValue = src._fixedPointValue;
    return;
}

Fixed &Fixed::operator=(const Fixed &rhs)
{
    std::cout << "Copy assignment operator called" << std::endl;
    if (this != &rhs)
        this->_fixedPointValue = rhs.getRawBits();
    return *this;
}

int Fixed::getRawBits() const
{
    std::cout << "getRawBits member function called" << std::endl;
    return (this->_fixedPointValue);
}

void Fixed::setRawBits(int const raw)
{
    this->_fixedPointValue = raw;
    return;
}

Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
    return;
}
