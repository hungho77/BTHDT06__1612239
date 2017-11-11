#include<iostream>
#include<ctime>
#include"Dragoon.h"
#include"Firebat.h"
#include"GAME.h"
#include"Marine.h"
#include"Protoss.h"
#include"ProtossAirUnit.h"
#include"ProtossGroundUnit.h"
#include"Scout.h"
#include"Team.h"
#include"Terran.h"
#include"TerranAirUnit.h"
#include"Unit.h"
#include"Wraith.h"
#include"Zealot.h"
#include<iomanip>

int main()
{
	CRand::initSeed();
	GAME StartCraff;
	StartCraff.Demo();
	StartCraff.Message();
	do
	{
		StartCraff.Start();
		cout << "Play agian!" << endl;
		cout << "1.Yes 0.No" << endl;
		int key;
		cin >> key;
		if (key)
			system("cls");
		else
			break;

	} while (true);
}