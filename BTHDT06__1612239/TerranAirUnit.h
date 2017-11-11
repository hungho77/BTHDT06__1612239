#pragma once
#include "Terran.h"
class TerranAirUnit :
	public Terran
{
public:
	TerranAirUnit();
	virtual string MoveMode();

	virtual ~TerranAirUnit();
};

