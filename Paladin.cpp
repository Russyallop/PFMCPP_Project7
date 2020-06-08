#include "Paladin.h"
#include "Utility.h"
#include <string>

Paladin::Paladin(std::string nameGiven, int hitPoints, int armor ) : Character(hitPoints, armor, 10), name(nameGiven)
{
    helpfulItems = makeHelpfulItems(2);
    defensiveItems = makeDefensiveItems(6);
}
Paladin::~Paladin()
{
    
}

const std::string& Paladin::getName()
{
    return name;
}
std::string Paladin::getStats()
{
    return getCharacterStats(this);
}
void Paladin::attack(Character& other)
{
    std::cout << name << " is attacking " << other.getName() << "!!!" << std::endl;
    Character::attack(other);    
}

