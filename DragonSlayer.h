#pragma once
#include <string>
#include "Character.h"
#include "AttackItem.h"

struct DragonSlayer : public Character
{
    DragonSlayer(std::string name,  int hitPoints, int armor );
    ~DragonSlayer();
    const std::string& getName() override;
    std::string getStats() override;
    void attack(Character& other) override;
private:
    const std::string name;
    // AttackItem* weapon;
    AttackItem* weapon = new AttackItem();
//    std::unique_ptr<AttackItem> weapon;
};

