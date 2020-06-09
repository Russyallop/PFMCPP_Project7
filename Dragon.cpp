#include "Dragon.h"
#include "DragonSlayer.h"
#include "Utility.h"

Dragon::Dragon(std::string nameGiven,  int hitPoints, int armor ) : Character(hitPoints, armor, 80), name(nameGiven)
{
    
}
Dragon::~Dragon()
{
    
}
const std::string& Dragon::getName()
{
    return name;
}
std::string Dragon::getStats()
{
    return getCharacterStats(this);
}

void Dragon::attack(Character &other)
{
    std::cout << name << " is attacking " << other.getName() << "!!!" << std::endl;
    if( auto* slayer = dynamic_cast<DragonSlayer*>(&other) )
    {
        slayer->defend();
    }
    else
    {
        Character::attack(other);
    }
}
