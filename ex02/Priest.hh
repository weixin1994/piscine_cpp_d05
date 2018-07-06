#ifndef _PRIEST_H_
#define _PRIEST_H_

#include "Mage.hh"
#include "Character.hh"

class Priest : public Mage
{
	public:
		Priest(std::string const& name, int level);
		int CloseAttack();
		int RangeAttack();
		void Heal();
};

#endif /* !PRIEST_H_ */
