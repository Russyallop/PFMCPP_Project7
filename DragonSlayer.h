#pragma once
#include <string>
#include "Character.h"
#include "AttackItem.h"

struct DragonSlayer : Character
{
    DragonSlayer(std::string name,  int hitPoints, int armor );
    ~DragonSlayer() override;
    const std::string& getName() override;
    std::string getStats() override;
    void attack(Character& other) override;
    
private:
    const std::string name;
    std::unique_ptr<Item> attackItem {new AttackItem()};

};

