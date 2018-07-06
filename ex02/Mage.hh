#ifndef _MAGE_H_
#define _MAGE_H_

#include "Character.hh"

class Mage : public Character
{
	public:
		Mage(std::string const& name, int level);
		int CloseAttack();
		int RangeAttack();
		void RestorePower();
};

#endif /* !MAGE_H_ */
