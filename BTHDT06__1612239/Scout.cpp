#include "Scout.h"



Scout::Scout()
{
	this->HP = 100;
	this->GroundDamage = 8;
	this->AirDamgae = 28;
	this->PS = 40;
}

string Scout::getClassName()
{
	return "Scout";
}


Scout::~Scout()
{
}
