#include "Zombie.hpp"

int main(){
    
    Zombie *zHorde = zHorde;
    zHorde = zombieHorde(7, "Prout");
    for (int i = 0; i < 7; i++)
    {
        zHorde[i].announce();
    }
    delete[] zHorde;
    return (0);
}