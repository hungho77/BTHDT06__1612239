#pragma once
#include "Unit.h"
class Protoss :
	public Unit
{
public:
	Protoss();
	virtual void showInfo();
	virtual string getSpecies();
	virtual void beAttacked(int damage);
	virtual	~Protoss();
};

