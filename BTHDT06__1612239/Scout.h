#pragma once
#include "ProtossAirUnit.h"
class Scout :
	public ProtossAirUnit
{
public:
	Scout();
	virtual string getClassName();
	virtual ~Scout();
};

