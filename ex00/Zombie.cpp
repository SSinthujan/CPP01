#include "Zombie.hpp"

void Zombie::setName(std::string name){_name = name;}
Zombie::~Zombie(){std::cout << "Zombie: " << _name << " détruit." << std::endl;}
void Zombie::announce(){std::cout << _name << ": BraiiiiiiinnnzzzZ..." << std::endl;}