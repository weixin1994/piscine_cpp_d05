#ifndef _HUNTER_H_
#define _HUNTER_H_

#include <string>
#include "Character.hh"
#include "Warrior.hh"

class Hunter : public virtual Character, private Warrior
{
	public:
		explicit Hunter(std::string const& name, int level);
		virtual ~Hunter() {}
		int CloseAttack();
		int RangeAttack();
		void Heal();
		void RestorePower();
		
	private:
		std::string const _weapon;
};

#endif /* !HUNTER_H_ */
