#include <iostream>
#include "Character.hh"
#include "Warrior.hh"

Warrior::Warrior(std::string const& name, int level) : Character(name, level, "Warrior", "Dwarf"), _weapon("hammer")
{
    _stats[STAT_STRENGTH] = 12;
    _stats[STAT_STAMINA] = 12;
    _stats[STAT_INTEL] = 6;
    _stats[STAT_SPIRIT] = 5;
    _stats[STAT_AGILITY] = 7;
    std::cout << "I'm " << getName() << " KKKKKKKKKKRRRRRRRRRRRRRREEEEEEEEOOOOOOORRRRGGGGGGG" << std::endl;
}

int Warrior::RangeAttack()
{
    if (_power < 10)
        return HandleOutOfPower();
    _power -= 10;
    Range = CLOSE;
    std::cout << getName() << " intercepts" << std::endl;
    return 0;
}

int Warrior::CloseAttack()
{
    if (_power < 30)
        return HandleOutOfPower();
    _power -= 30;
    std::cout << getName() << " strikes with his " << _weapon << std::endl;
    return 20 + _stats[STAT_STRENGTH];
}

