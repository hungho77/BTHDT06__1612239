#pragma once
#include"Team.h"

class GAME
{
public:
	GAME();
	void Message();
	void Demo();
	void Start();
	~GAME();
private:
	int selectAttackMode();
	void attack(Team &A, Team &B, int attackMode);
	void Combat(Team &A, Team &B, int attackMode);
	void Victory(Team &A, Team &B);
};

