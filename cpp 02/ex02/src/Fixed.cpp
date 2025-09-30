#include "../lib/Fixed.hpp"

/*
    // Constructors, destructor, and assignment operator
*/
Fixed::Fixed() : _fixedPointValue(0)
{
    return;
}
Fixed::Fixed(const Fixed &src)
{
    this->_fixedPointValue = src._fixedPointValue;
    return;
}
Fixed::Fixed(const int intValue)
{
    this->_fixedPointValue = intValue << this->_fractionalBits;
}
Fixed::Fixed(const float floatValue)
{
    this->_fixedPointValue = roundf(floatValue * (1 << this->_fractionalBits));
}
Fixed::~Fixed()
{
    return;
}

/*
    // Copy assignment operator
*/
Fixed &Fixed::operator=(const Fixed &rhs)
{
    if (this != &rhs)
        this->_fixedPointValue = rhs.getRawBits();
    return *this;
}

/*
    // Getter and Setter
*/
int Fixed::getRawBits() const
{
    return (this->_fixedPointValue);
}

void Fixed::setRawBits(int const raw)
{
    this->_fixedPointValue = raw;
    return;
}

/*
    // Relational operator
*/
float Fixed::toFloat(void) const
{
    return static_cast<float>(this->_fixedPointValue) / (1 << _fractionalBits);
}
int Fixed::toInt(void) const
{
    return this->_fixedPointValue >> _fractionalBits;
}

/*
    // Comparison operator
*/
bool Fixed::operator==(const Fixed &rhs) const { return this->_fixedPointValue == rhs._fixedPointValue; }
bool Fixed::operator!=(const Fixed &rhs) const { return this->_fixedPointValue != rhs._fixedPointValue; }
bool Fixed::operator>(const Fixed &rhs) const { return this->_fixedPointValue > rhs._fixedPointValue; }
bool Fixed::operator>=(const Fixed &rhs) const { return this->_fixedPointValue >= rhs._fixedPointValue; }
bool Fixed::operator<(const Fixed &rhs) const { return this->_fixedPointValue < rhs._fixedPointValue; }
bool Fixed::operator<=(const Fixed &rhs) const { return this->_fixedPointValue <= rhs._fixedPointValue; }

/*
    // Arithmetic operator
*/
Fixed Fixed::operator+(const Fixed &rhs) const
{
    Fixed result;
    result.setRawBits(this->_fixedPointValue + rhs._fixedPointValue);
    return result;
}
Fixed Fixed::operator-(const Fixed &rhs) const
{
    Fixed result;
    result.setRawBits(this->_fixedPointValue - rhs._fixedPointValue);
    return result;
}
Fixed Fixed::operator*(const Fixed &rhs) const
{
    Fixed result;
    long long temp = (long long)this->_fixedPointValue * rhs._fixedPointValue; // prevent overflow
    result.setRawBits(static_cast<int>(temp >> _fractionalBits)); // adjust for scaling
    return result;
}
Fixed Fixed::operator/(const Fixed &rhs) const
{
    Fixed result;
    long long temp = ((long long)this->_fixedPointValue << _fractionalBits);
    result.setRawBits(static_cast<int>(temp / rhs._fixedPointValue));
    return result;
}


/*
    // Increment and Decrement operator
*/
Fixed &Fixed::operator++()
{
    this->_fixedPointValue += 1;
    return *this;
}
Fixed Fixed::operator++(int)
{
    Fixed temp(*this);
    this->_fixedPointValue += 1;
    return temp;
}
Fixed &Fixed::operator--()
{
    this->_fixedPointValue -= 1;
    return *this;
}
Fixed Fixed::operator--(int)
{
    Fixed temp(*this);
    this->_fixedPointValue -= 1;
    return temp;
}

/*
    // Min and Max functions
*/
Fixed &Fixed::min(Fixed &a, Fixed &b)
{
    return (a < b) ? a : b;
}
Fixed &Fixed::max(Fixed &a, Fixed &b)
{
    return (a > b) ? a : b;
}
const Fixed &Fixed::min(const Fixed &a, const Fixed &b)
{
    return (a < b) ? a : b;
}

const Fixed &Fixed::max(const Fixed &a, const Fixed &b)
{
    return (a > b) ? a : b;
}

/*
    // Insertion operator overload
*/
std::ostream &operator<<(std::ostream &os, const Fixed &obj)
{
    os << obj.toFloat();
    return os;
}