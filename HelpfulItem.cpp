#include "HelpfulItem.h"
#include "Dwarf.h"
#include "Paladin.h"
#include "DragonSlayer.h"
#include "Dragon.h"
#include <assert.h>
#include "Utility.h"


void HelpfulItem::use(Character *character)
{
//    assert(false);
    //make your defensive item use the appropriate Utility helper functions
    useHelpfulItem(character, this);
}
