#pragma once
#include "Protoss.h"
class ProtossGroundUnit :
	public Protoss
{
public:
	ProtossGroundUnit();
	virtual string MoveMode();
	virtual ~ProtossGroundUnit();
};

