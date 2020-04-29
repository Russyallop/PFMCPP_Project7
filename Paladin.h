#pragma once
#include <string>
#include "Character.h"

struct Paladin : public Character
{
public:
    Paladin(std::string name,  int hitPoints, int armor );
    ~Paladin();
    const std::string& getName() override;
    std::string getStats() override;
    void attack( Character& other ) override;
    
private:
    const std::string name;
};
