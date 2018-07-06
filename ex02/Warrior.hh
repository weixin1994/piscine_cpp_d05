#ifndef _WARRIOR_H_
#define _WARRIOR_H_

#include <string>
#include "Character.hh"

class Warrior : public Character
{
	public:
		explicit Warrior(std::string const& name, int level);
		virtual ~Warrior() {}
		int CloseAttack();
		int RangeAttack();
		
	private:
		std::string const _weapon;
};

#endif /* !WARRIOR_H_ */
