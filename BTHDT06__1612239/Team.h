#pragma once
#include<iostream>
#include<vector>
#include"Unit.h"
#include"Dragoon.h"
#include"Firebat.h"
#include"Marine.h"
#include"Scout.h"
#include"Zealot.h"
#include"Wraith.h"
#include"Rand.h"
using namespace std;

class Team
{
	vector<Unit*> team;
public:
	//khởi tạo bằng tên chủng loài
	Team(string Uint);
	//số lượng lính hiện có
	int NumOfUnit();
	void showTeam();
	Unit *getUnit(int i);
	void attackMode0(Team &enemyTeam);
	void attackMode1(Team &enemyTeam);
	void attackMode2(Team &enemyTeam);
	void attackMode3(Team &enemyTeam);
	void attackMode4(Team &enemyTeam);
	~Team();
};

