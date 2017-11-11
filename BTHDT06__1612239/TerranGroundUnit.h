#pragma once
#include "Terran.h"
class TerranGroundUnit :
	public Terran
{
public:
	TerranGroundUnit();
	virtual string MoveMode();
	virtual ~TerranGroundUnit();
};

