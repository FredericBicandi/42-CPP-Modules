#ifndef BITCOINECHANGE_HPP
#define BITCOINECHANGE_HPP

#include <iostream>
#include <map>

class bitcoin
{
private:
    std::map<std::string, double> m;

public:
    bitcoin();
    ~bitcoin();
};

#endif