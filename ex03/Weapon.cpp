#include "Weapon.hpp"

Weapon::Weapon(std::string type){_type = type;}
const std::string& Weapon::getType(){const std::string &weaponREF = _type; return(weaponREF);}
void Weapon::setType(std::string string){_type = string;}