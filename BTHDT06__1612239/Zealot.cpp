#include "Zealot.h"



Zealot::Zealot()
{
	this->HP = 80;
	this->GroundDamage = 16;
	this->AirDamgae = 0;
	this->PS = 20;
}

string Zealot::getClassName()
{
	return "Zealot";
}


Zealot::~Zealot()
{
}
