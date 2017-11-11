#include "Marine.h"



Marine::Marine()
{
	this->HP = 80;
	this->GroundDamage = 12;
	this->AirDamgae = 12;
}

string Marine::getClassName()
{
	return "Marine";
}


Marine::~Marine()
{
}
