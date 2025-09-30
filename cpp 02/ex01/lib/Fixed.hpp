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

        Fixed & operator=(const Fixed &rhs);
        float toFloat( void ) const;
        int toInt( void ) const;
        int getRawBits( void ) const;
        void setRawBits( int const raw );
        ~Fixed();
};

std::ostream & operator<<(std::ostream &os, const Fixed &obj);



#endif