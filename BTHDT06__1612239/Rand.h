#pragma once

class CRand
{
public:
	CRand();
	static void initSeed();
	static int generateRandnNumab(int a, int b);
	~CRand();
};

