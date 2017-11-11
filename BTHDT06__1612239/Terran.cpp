#include "Terran.h"
#include<iostream>
#include<iomanip>
using namespace std;


Terran::Terran()
{
	this->PS = 0;
}

void Terran::showInfo()
{
	if (this->getClassName().compare("Wraith") == 0)
	{
		cout << this->getClassName() << "(" << this->MoveMode() << ", " << this->getHP() << ")    ";
	}
	else if(this->getClassName().compare("Marine") == 0)
		cout << this->getClassName() << "(" << this->MoveMode() << ", " << this->getHP() << ")  ";
	else
		cout << this->getClassName() << "(" << this->MoveMode() << ", " << this->getHP() << ")";
}

string Terran::getSpecies()
{
	return "Terran";
}

void Terran::beAttacked(int damage)
{
	this->HP = this->HP - damage;
	if (this->HP < 0)
		this->HP = 0;
}


Terran::~Terran()
{
}
