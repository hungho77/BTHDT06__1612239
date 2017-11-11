#pragma once
//#include"GAME.h"
#include<string>
using namespace std;

class Unit
{
protected:
	//Máu
	int HP;
	////Giáp cho loài Protoss
	int PS;
	//sát thương cho lính đường bộ
	int GroundDamage;
	//sát thương cho lính đường không
	int AirDamgae;
public:
	Unit();
	//chế độ di chuyển
	virtual string MoveMode() = 0;
	//tấn công đường bộ
	virtual int GroundAttack();
	//tấn công đường không
	virtual int AirAttack() ;
	virtual int getHP();
	virtual int getPS();
	virtual string getClassName() = 0;
	virtual string getSpecies() = 0;
	virtual void showInfo() = 0;
	virtual void beAttacked(int damage) = 0;
	virtual ~Unit();
};

