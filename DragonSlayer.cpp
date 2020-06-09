#include "DragonSlayer.h"
#include "Dragon.h"
#include "Utility.h"


DragonSlayer::DragonSlayer(std::string nameGiven,  int hitPoints, int armor ) : Character(hitPoints, armor, 4), name(nameGiven)
{
    helpfulItems = makeHelpfulItems(3);
    defensiveItems = makeDefensiveItems(3);
}
const std::string& DragonSlayer::getName()
{
    return name;
}

std::string DragonSlayer::getStats()
{
    return getCharacterStats(this);
}

void DragonSlayer::attack(Character& other)
{
    std::cout << name << " is attacking " << other.getName() << " !!" << std::endl;
    if( auto* dragon = dynamic_cast<Dragon*>(&other) )
    {
        attackItem->use(this);
        attackItem.reset();

        while( dragon->getHP() > 0 )
        {
          dragon->takeDamage(attackDamage);
        }
    }
    Character::attack(other);        
}



