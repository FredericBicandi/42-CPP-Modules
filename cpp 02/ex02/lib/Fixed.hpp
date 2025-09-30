#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed
{
    private:
        int                _fixedPointValue;
        static const int    _fractionalBits = 8;
    public:
        Fixed();
        Fixed(const Fixed &src);
        Fixed(const int intValue);
        Fixed(const float floatValue);
        ~Fixed();

        Fixed & operator=(const Fixed &rhs);
        bool    operator>(const Fixed &rhs)  const;
        bool    operator<(const Fixed &rhs)  const;
        bool    operator>=(const Fixed &rhs) const;
        bool    operator<=(const Fixed &rhs) const;
        bool    operator==(const Fixed &rhs) const;
        bool    operator!=(const Fixed &rhs) const;
        
        Fixed operator+(const Fixed &rhs) const;
        Fixed operator-(const Fixed &rhs) const;
        Fixed operator*(const Fixed &rhs) const;
        Fixed operator/(const Fixed &rhs) const;

        Fixed & operator++();
        Fixed & operator--();
        Fixed operator++(int);
        Fixed operator--(int);

        static Fixed & min(Fixed &a, Fixed &b);
        static Fixed & max(Fixed &a, Fixed &b);
        static const Fixed & min(const Fixed &a, const Fixed &b);
        static const Fixed & max(const Fixed &a, const Fixed &b);

        float toFloat( void ) const;
        int toInt( void ) const;

        int getRawBits( void ) const;
        void setRawBits( int const raw );
};

std::ostream & operator<<(std::ostream &os, const Fixed &obj);



#endif