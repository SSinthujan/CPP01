#include "Zombie.hpp"

int main(){
    
    Zombie zombie;
    Zombie *newZ;
    zombie.setName("Z");
    zombie.announce();
    randomChump("randomZ");
    newZ = newZombie("newZ");
    newZ->announce();
    delete newZ;
    return (0);
}