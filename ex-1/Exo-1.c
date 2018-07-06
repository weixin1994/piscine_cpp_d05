#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Exo-1.h"

static void CthulhuInitializer(t_cthulhu* this)
{
    printf("Building Cthulhu\n");
    this->m_name = strdup("Cthulhu");
    this->m_power = 42;
}

static void KoalaInitializer(t_koala* this, char* _name, char _isALegend)
{
    printf("Building Cthulhu\n");
    printf("Building %s\n", _name);
    ((t_cthulhu*)this)->m_name = strdup(_name);
    ((t_cthulhu*)this)->m_power = (_isALegend == 0 ? 0 : 42);
    this->m_isALegend = _isALegend;
}

t_cthulhu* NewCthulhu()
{
    t_cthulhu* elem = malloc(sizeof(t_cthulhu));
    if (!elem)
        return NULL;
    printf("----\n");
    CthulhuInitializer(elem);
    return elem;
}

void PrintPower(t_cthulhu* this)
{
    if (!this)
        return;
    printf("Power => %d\n", this->m_power);
}

void Attack(t_cthulhu* this)
{
    if (!this)
        return;
    if (this->m_power < 42)
    {
        printf("%s can't attack, he doesn't have enough power\n", this->m_name);
        return;
    }
    this->m_power -= 42;
    printf("%s attacks and destroys the city\n", this->m_name);
}

void Sleeping(t_cthulhu* this)
{
    if (!this)
        return;
    this->m_power += 42000;
    printf("%s sleeps\n", this->m_name);
}

t_koala* NewKoala(char* name, char _isALegend)
{
    t_koala* elem = malloc(sizeof(t_koala));
    if (!elem)
        return NULL;
    printf("----\n");
    KoalaInitializer(elem, name, _isALegend);
    return elem;
}

void Eat(t_koala* this)
{
    if (!this)
        return;
    ((t_cthulhu*)this)->m_power += 42;
    printf("%s eats\n", ((t_cthulhu*)this)->m_name);
}
