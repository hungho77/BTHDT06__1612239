#include "Protoss.h"
#include<iostream>
using namespace std;


Protoss::Protoss()
{
}

void Protoss::showInfo()
{
	if (this->getClassName().compare("Scout") == 0)
		cout << this->getClassName() << "(" << this->MoveMode() << ", " << this->getHP() << "/" << this->getPS() << ")    ";
	else if (this->getClassName().compare("Zealot") == 0)
		cout << this->getClassName() << "(" << this->MoveMode() << ", " << this->getHP() << "/" << this->getPS() << ") ";
	else 
		cout << this->getClassName() << "(" << this->MoveMode() << ", " << this->getHP() << "/" << this->getPS() << ")";
}

string Protoss::getSpecies()
{
	return "Protoss";
}

void Protoss::beAttacked(int damage)
{
	if (this->PS > damage)
	{
		this->PS = this->PS - damage;
	}
	else
	{
		this->PS = 0;
		damage = damage - this->PS;
		this->HP = this->HP - damage;
		if (this->HP < 0)
			this->HP = 0;
	}
}

Protoss::~Protoss()
{
}
