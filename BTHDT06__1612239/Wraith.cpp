#include "Wraith.h"



Wraith::Wraith()
{
	this->HP = 120;
	this->GroundDamage = 8;
	this->AirDamgae = 20;
}

string Wraith::getClassName()
{
	return "Wraith";
}


Wraith::~Wraith()
{
}
