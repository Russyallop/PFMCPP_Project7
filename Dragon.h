
#pragma once
#include <string>
#include "Character.h"

struct Dragon : public Character
{
    Dragon(std::string name,  int hitPoints, int armor );
    ~Dragon();
    const std::string& getName() override;
    std::string getStats() override;
    void attack(Character& other) override;
private:
    const std::string name;
};
