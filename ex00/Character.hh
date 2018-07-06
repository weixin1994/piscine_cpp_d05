#ifndef _CHARACTER_H_
#define _CHARACTER_H_

#include <string>

class Character
{
	public:
		explicit Character(std::string const& name, int level);
		virtual ~Character() {}

		enum Stats
		{
			STAT_STRENGTH = 0,
			STAT_STAMINA = 1,
			STAT_INTEL = 2,
			STAT_SPIRIT = 3,
			STAT_AGILITY = 4,
			STAT_MAX = 5
		};

		enum AttackRange
		{
			CLOSE = 0,
			RANGE = 1
		};

		const std::string& getName() const;
		int getLvl() const;
		int getPv() const;
		int getPower() const;

		int CloseAttack();
		int RangeAttack();
		void Heal();
		void RestorePower();

		void TakeDamage(int damage);

		AttackRange Range;
	protected:
		int _stats[STAT_MAX];
		int HandleOutOfPower();
		std::string const _name;
		int _level;
		int _pv;
		int _power;
		std::string const _class;
		std::string const _race;
};

#endif /* !CHARACTER_H_ */
