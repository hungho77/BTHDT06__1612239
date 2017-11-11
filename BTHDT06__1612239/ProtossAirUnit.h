#pragma once
#include "Protoss.h"
class ProtossAirUnit :
	public Protoss
{
public:
	ProtossAirUnit();
	virtual string MoveMode();
	virtual ~ProtossAirUnit();
};

