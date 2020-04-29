#include "AttackItem.h"
#include "Dwarf.h"
#include "Paladin.h"
#include "DragonSlayer.h"
#include "Dragon.h"
#include <assert.h>
#include "Utility.h"




void AttackItem::use(Character* character)
{
    useAttackItem(character, this);
}
