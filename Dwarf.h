#pragma once
#include <string>
#include "Character.h"

struct Dwarf : public Character
{
public:
    Dwarf(std::string name,  int hitPoints, int armor );
    ~Dwarf();
    const std::string&  getName() override;
    std::string getStats() override;
    void attack(Character& other) override;
private:
    const std::string name;
};


