#include "Dwarf.h"
#include "Utility.h"

Dwarf::Dwarf(std::string nameGiven, int hitPoints, int armor ) : Character(hitPoints, armor, 4), name(nameGiven)
{
    helpfulItems = makeHelpfulItems(rand()%6);
    defensiveItems = makeDefensiveItems(rand()%6);
}
Dwarf::~Dwarf()
{
    
}
const std::string& Dwarf::getName()
{
    return name;
}
std::string Dwarf::getStats()
{
    return getCharacterStats(this);
}
void Dwarf::attack(Character& other)
{
    std::cout << name << " is attacking " << other.getName() << "!!!" << std::endl;
    Character::attack(other);
}

