#include "Unit.h"



Unit::Unit()
{
}


int Unit::GroundAttack()
{
	return this->GroundDamage;
}

int Unit::AirAttack()
{
	return this->AirDamgae;
}

int Unit::getHP()
{
	return this->HP;
}

int Unit::getPS()
{
	return this->PS;
}

Unit::~Unit()
{
}
