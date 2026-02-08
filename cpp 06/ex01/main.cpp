#include <iostream>
#include "Serializer.hpp"
#include "Data.hpp"

int main()
{
    Data d;
    d.id = 42;
    d.name = "hello";

    Data* original = &d;

    uintptr_t raw = Serializer::serialize(original);
    Data* restored = Serializer::deserialize(raw);

    std::cout << "Original ptr:  " << original << std::endl;
    std::cout << "Restored ptr:  " << restored << std::endl;

    if (original == restored)
        std::cout << "Pointers match\n";
    else
        std::cout << "Pointers differ\n";

    std::cout << restored->id << " " << restored->name << std::endl;
}
