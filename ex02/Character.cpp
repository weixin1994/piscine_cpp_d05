#include <iostream>
#include "Character.hh"

Character::Character(std::string const& name, int level, std::string const& cls, std::string const& race) :
    Range(CLOSE), _name(name), _level(level), _pv(100), _power(100), _class(cls), _race(race)
{
    for (int i = 0; i < STAT_MAX; ++i)
        _stats[i] = 5;
    std::cout << getName() << " Created" << std::endl;
}

std::string const& Character::getName() const
{
    return _name;
}

int Character::getLvl() const
{
    return _level;
}

int Character::getPv() const
{
    return _pv;
}

int Character::getPower() const
{
    return _power;
}

int Character::RangeAttack()
{
    if (_power < 10)
        return HandleOutOfPower();
    std::cout << getName() << " launches a stone" << std::endl;
    _power -= 10;
    return 5 + _stats[STAT_STRENGTH];
}


int Character::CloseAttack()
{
    if (_power < 10)
        return HandleOutOfPower();
    std::cout << getName() << " strikes with a wood stick" << std::endl;
    _power -= 10;
    return 10 + _stats[STAT_STRENGTH];
}

void Character::Heal()
{
   _pv += 50;
   if (_pv > 100)
       _pv = 100;
   std::cout << getName() << " takes a potion" << std::endl;
}

int Character::HandleOutOfPower()
{
    std::cout << getName() << " out of power" << std::endl;
    return 0;
}

void Character::RestorePower()
{
    _power = 100;
    std::cout << getName() << " eats" << std::endl;
}

void Character::TakeDamage(int damage)
{
    if (_pv <= damage)
    {
        _pv = 0;
        std::cout << getName() << " out of combat" << std::endl;
        return;
    }
    _pv -= damage;
    std::cout << getName() << " takes " << damage << " damage" << std::endl;
}
