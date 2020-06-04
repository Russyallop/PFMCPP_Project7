#include "DragonSlayer.h"
#include "Dragon.h"
#include "Utility.h"

//DragonSlayer::DragonSlayer
DragonSlayer::DragonSlayer(std::string nameGiven,  int hitPoints, int armor ) : Character(hitPoints, armor, 4), name(nameGiven)
{
    helpfulItems = makeHelpfulItems(rand()%6);
    defensiveItems = makeDefensiveItems(rand()%6);
}
DragonSlayer::~DragonSlayer()
{

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
//        assert(false);
        attackItem->use(this);
        attackItem.reset();
        //DragonSlayers get a 10x boost when attacking dragons, from their attack item.
        //so they should USE their attack item before attacking the dragon... 
        //note that items are single-use only, so you need to reset it after use.  
        //look in the Character class for how the other item types are reset after use.
        while( dragon->getHP() > 0 )
        {
          dragon->takeDamage(attackDamage);
        }
        std::cout << "AFTER LOOP"<<std::endl;
    }
    Character::attack(other);        
}



