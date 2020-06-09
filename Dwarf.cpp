#include "Dwarf.h"
#include "Utility.h"

Dwarf::Dwarf(std::string nameGiven, int hitPoints, int armor ) : Character(hitPoints, armor, 4), name(nameGiven)
{
    helpfulItems = makeHelpfulItems(2);
    defensiveItems = makeDefensiveItems(5);
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
    Character::attack(other);
}

