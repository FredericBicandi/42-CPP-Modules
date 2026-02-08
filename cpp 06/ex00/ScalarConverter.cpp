#include "ScalarConverter.hpp"
#include <iostream>
#include <sstream>
#include <limits>
#include <cstdlib>
#include <cctype>
#include <cmath>

static bool isChar(const std::string& s)
{
    return s.length() == 1 && !std::isdigit(s[0]);
}

static bool isInt(const std::string& s)
{
    std::istringstream iss(s);
    int n;
    char c;
    return (iss >> n) && !(iss >> c);
}

static bool isFloat(const std::string& s)
{
    if (s == "nanf" || s == "+inff" || s == "-inff")
        return true;
    if (s[s.length()-1] != 'f')
        return false;
    std::string tmp = s.substr(0, s.length()-1);
    std::istringstream iss(tmp);
    float f;
    char c;
    return (iss >> f) && !(iss >> c);
}

static bool isDouble(const std::string& s)
{
    if (s == "nan" || s == "+inf" || s == "-inf")
        return true;
    std::istringstream iss(s);
    double d;
    char c;
    return (iss >> d) && !(iss >> c);
}

static void printChar(double d)
{
    if (std::isnan(d) || d < 0 || d > 127)
        std::cout << "char: impossible\n";
    else if (!std::isprint(static_cast<int>(d)))
        std::cout << "char: Non displayable\n";
    else
        std::cout << "char: '" << static_cast<char>(d) << "'\n";
}

static void printInt(double d)
{
    if (std::isnan(d) || d > std::numeric_limits<int>::max() ||
        d < std::numeric_limits<int>::min())
        std::cout << "int: impossible\n";
    else
        std::cout << "int: " << static_cast<int>(d) << "\n";
}

static void printFloat(double d)
{
    std::cout << "float: " << static_cast<float>(d);
    if (d == static_cast<int>(d) && !std::isnan(d) && !std::isinf(d))
        std::cout << ".0";
    std::cout << "f\n";
}

static void printDouble(double d)
{
    std::cout << "double: " << d;
    if (d == static_cast<int>(d) && !std::isnan(d) && !std::isinf(d))
        std::cout << ".0";
    std::cout << "\n";
}

void ScalarConverter::convert(const std::string& literal)
{
    double value = 0.0;

    if (isChar(literal))
        value = static_cast<double>(literal[0]);
    else if (isInt(literal))
        value = std::atof(literal.c_str());
    else if (isFloat(literal))
        value = std::atof(literal.c_str());
    else if (isDouble(literal))
        value = std::atof(literal.c_str());
    else
    {
        std::cout << "char: impossible\nint: impossible\nfloat: impossible\ndouble: impossible\n";
        return;
    }

    printChar(value);
    printInt(value);
    printFloat(value);
    printDouble(value);
}
