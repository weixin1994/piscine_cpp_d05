#include <iostream>
#include "Paladin.hh"

Paladin::Paladin(std::string const& name, int level) : Character(name, level, "Paladin", "Human"), 
	Warrior(name, level), Priest(name, level)
{
    _stats[STAT_STRENGTH] = 9;
    _stats[STAT_STAMINA] = 10;
    _stats[STAT_INTEL] = 10;
    _stats[STAT_SPIRIT] = 10;
    _stats[STAT_AGILITY] = 2;
    std::cout << "the light falls on " << getName() << std::endl;
}

int Paladin::CloseAttack()
{
    return Warrior::CloseAttack();
}

int Paladin::RangeAttack()
{
    return Priest::RangeAttack();
}

void Paladin::Heal()
{
    Priest::Heal();
}

void Paladin::RestorePower()
{
    Warrior::RestorePower();
}

int Paladin::Intercept()
{
    return Warrior::RangeAttack();
}
