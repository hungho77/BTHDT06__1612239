#include "Firebat.h"



Firebat::Firebat()
{
	this->HP = 100;
	this->GroundDamage = 18;
	this->AirDamgae = 0;
}

string Firebat::getClassName()
{
	return "Firebat";
}


Firebat::~Firebat()
{
}
