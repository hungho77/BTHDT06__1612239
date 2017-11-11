#pragma once
#include "TerranGroundUnit.h"
class Marine :
	public TerranGroundUnit
{
public:
	Marine();
	virtual string getClassName();
	virtual ~Marine();
};

