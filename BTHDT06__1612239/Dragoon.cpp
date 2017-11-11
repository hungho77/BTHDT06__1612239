#include "Dragoon.h"



Dragoon::Dragoon()
{
	this->HP = 90;
	this->GroundDamage = 20;
	this->AirDamgae = 20;
	this->PS = 30;
}

string Dragoon::getClassName()
{
	return "Dragoon";
}


Dragoon::~Dragoon()
{
}
