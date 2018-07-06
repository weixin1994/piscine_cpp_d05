#ifndef _EXO_1_H_
#define _EXO_1_H_

typedef struct s_cthulu
{
    int m_power;
    char* m_name;
}t_cthulhu;

t_cthulhu* NewCthulhu();
void PrintPower(t_cthulhu* this);
void Attack(t_cthulhu* this);
void Sleeping(t_cthulhu* this);

typedef struct s_koala
{
    t_cthulhu m_parent;
    char m_isALegend;
}t_koala;

t_koala* NewKoala(char* name, char _isALegend);
void Eat(t_koala* this);


#endif /* !_EXO_1_H_ */
