#include "../lib/Zombie.hpp"


Zombie::Zombie(const std::string& name) {
    this->name = name;
    std::cout << "Zombie " << name << " created." << std::endl;
}
void Zombie::announce() const {
    std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie::~Zombie() {
}