#include "iostream"
#include "vector"

using namespace std;
int main(void)
{
    vector<string> names{"Freddy", "Mariam", "Serena", "Nour"};

    for (const auto &name : names)
    {
        cout << name << endl;
    }
    return (0);
}