#pragma once
#include "Unit.h"

class Terran :
	public Unit
{
public:
	Terran();
	virtual void showInfo();
	virtual string getSpecies();
	virtual void beAttacked(int damage);
	virtual ~Terran();
};

