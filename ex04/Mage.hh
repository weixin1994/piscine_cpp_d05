#ifndef _MAGE_H_
#define _MAGE_H_

#include "Character.hh"

class Mage : public virtual Character
{
	public:
		explicit Mage(std::string const& name, int level);
		int CloseAttack();
		int RangeAttack();
		void RestorePower();
};

#endif /* !MAGE_H_ */
