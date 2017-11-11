#include "GAME.h"
#include<ctime>
#include<iostream>
#include<iomanip>
#define N 5
using namespace std;


GAME::GAME()
{

}

void GAME::Message()
{
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	cout << "         .--.--.       ___                            ___      ,----..                                      " << endl;
	cout << "        /  /    \'.   ,--.\'|_                        ,--.\'|_   /   /   \\                      .--.,   .--.,  " << endl;
	cout << "       |  :  /`. /   |  | :,\'              __  ,-.  |  | :,\' |   :     :  __  ,-.          ,--.\'  \\,--.\'  \\ " << endl;
	cout << "       ;  |  |--`    :  : \' :            ,\' ,\'/ /|  :  : \' : .   |  ;. /,\' ,\'/ /|          |  | /\\/|  | /\\/ " << endl;
	cout << "       |  :  ;_    .;__,\'  /    ,--.--.  \'  | |\' |.;__,\'  /  .   ; /--` \'  | |\' | ,--.--.  :  : :  :  : :   " << endl;
	cout << "        \\  \\    `. |  |   |    /       \\ |  |   ,\'|  |   |   ;   | ;    |  |   ,\'/       \\ :  | |-,:  | |-, " << endl;
	cout << "         `----.   \\:__,\'| :   .--.  .-. |\'  :  /  :__,\'| :   |   : |    '  :  / .--.  .-. ||  : :/||  : :/| " << endl;
	cout << "         __ \\  \\  |  \'  : |__  \\__\\/: . .|  | \'     \'  : |__ .   | \'___ |  | '   \\__\\/: . .|  |  .\'|  |  .\' " << endl;
	cout << "        /  /`--'  /  |  | \'.\'| ,\" .--.; |;  : |     |  | \'.\'|\'   ; : .\'|;  : |   ,\" .--.; |\'  : \'  \'  : \'   " << endl;
	cout << "       \'--\'.     /   ;  :    ;/  /  ,.  ||  , ;     ;  :    ;\'   | \'/  :|  , ;  /  /  ,.  ||  | |  |  | |   " << endl;
	cout << "         `--'---\'    |  ,   /;  :   .\'   \\---\'      |  ,   / |   :    /  ---\'  ;  :   .\'   \\  : \\  |  : \\   " << endl;
	cout << "                      ---`-\' |  ,     .-./           ---`-\'   \\   \\ .\'         |  ,     .-./  |,\'  |  |,\'   " << endl;
	cout << "                              `--`---\'                         `---`            `--`---'   `--\'    `--\'     " << endl;
	cout << "                                                                                                            " << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	system("pause");
	system("cls");
}

void GAME::Demo()
{
	Team A("Terran");
	Team B("Protoss");
	cout << setw(51) << " DEMO" << endl << endl;
	cout << "                     Team A                     vs                     Team B" << endl;
	cout << "                    (Terran)                                          (Protoss)" << endl;
	for (int i = 0; i < N; i++)
	{
		cout << setw(15) << " ";
		A.getUnit(i)->showInfo();
		cout << setw(30) << " ";
		B.getUnit(i)->showInfo();
		cout << endl;
	}
	cout << endl;
	cout << setw(51) << "Fight" << endl;
	cout << setfill('-');
	cout << setw(100) << "-" << endl;
	cout << setfill(' ');
	cout << setw(60) << "Team B attack Team A" << endl;
	B.attackMode0(A);
	cout << setw(53) << "---//---" << endl;
	cout << setw(60) << "Team A attack Team B" << endl;
	A.attackMode0(B);
	cout << setfill('-');
	cout << setw(100) << "-" << endl;
	cout << setfill(' ');
	cout << endl;
	cout << "                     Team A                     vs                     Team B" << endl;
	cout << "                    (Terran)                                          (Protoss)" << endl;
	for (int i = 0; i < N; i++)
	{
		cout << setw(15) << " ";
		A.getUnit(i)->showInfo();
		cout << setw(30) << " ";
		B.getUnit(i)->showInfo();
		cout << endl;
	}
	system("pause");
	system("cls");
}

void GAME::Start()
{
	Team A("Terran");
	Team B("Protoss");
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	cout << setw(55) << "GAME START" << endl << endl;
	cout << "                     Team A                     vs                     Team B" << endl;
	cout << "                    (Terran)                                          (Protoss)" << endl;
	for (int i = 0; i < N; i++)
	{
		cout << setw(15) << " ";
		A.getUnit(i)->showInfo();
		cout << setw(30) << " ";
		B.getUnit(i)->showInfo();
		cout << endl;
	}
	cout << endl;
	int attackMode = selectAttackMode();
	system("cls");
	Combat(A, B, attackMode);
	system("pause");
	system("cls");
	Victory(A, B);
}

int GAME::selectAttackMode()
{
	int n;

	cout << setw(53) << "---//---" << endl;
	cout << setw(40) << "" << "SELECT ATTACK MODE" << endl;
	cout << setw(30) << "" << "1. Random Attack" << endl;
	cout << setw(30) << "" << "2. Ramdom Ability Attack" << endl;
	cout << setw(30) << "" << "3. Ability Attack The Least HP Unit" << endl;
	cout << setw(30) << "" << "4. Ability Attack The Most Dangerous Unit" << endl;
	cout << setw(30) << "";
	do
	{	
		int j = 0;
		cin >> n;
		int k = n;
		for (int i = 0; i < 90; i++)
			cout << "\b";
		if (n == 0)
		{
			cout << " ";
			cout << "\b";
			continue;
		}
		else if (n < 0)
		{
			j = 1;
		}
		while (k != 0)
		{
			k = k / 10;
			j++;
		}
		for (int i = 0; i < j; i++)
		{
			cout << " ";

		}
		for (int i = 0; i < j; i++)
		{
			cout << "\b";

		}
	} while (n < 1 || n >4);
	return n;
}

void GAME::attack(Team & T1, Team & T2, int attackMode)
{
	switch (attackMode)
	{
	case 1:
	{
		T1.attackMode1(T2);
		break;
	}
	case 2:
	{
		T1.attackMode2(T2);
		break;
	}
	case 3:
	{
		T1.attackMode3(T2);
		break;
	}
	case 4:
	{
		T1.attackMode4(T2);
		break;
	}
	default:
		break;
	}
}

void GAME::Combat(Team &A, Team &B, int attackMode)
{
	int i = 1;
	cout << setw(50) << "FIGHT" << endl;
	while (A.NumOfUnit() != 0)
	{

		cout << setw(50) << "---Round " << i++ << "---" << endl;
		cout << setfill('-');
		cout << setw(100) << "-" << endl;
		cout << setfill(' ');
		cout << setw(60) << "Team A attack Team B" << endl;
		attack(A, B, attackMode);
		if (B.NumOfUnit() != 0)
		{
			cout << setw(53) << "---//---" << endl;
			cout << setw(60) << "Team B attack Team A" << endl;
			attack(B, A, attackMode);
			cout << setfill('-');
			cout << setw(100) << "-" << endl;
			cout << setfill(' ');
		}
		else
			break;
	}
}

void GAME::Victory(Team & A, Team & B)
{
	if (A.NumOfUnit())
	{
		for (int i = 0; i < 10; i++)
			cout << endl;
		cout << "          _______ ______           __  __                  __      _______ _____ _______ ____  _______     __	" << endl;
		cout << "         |__   __|  ____|   /\\    |  \\/  |       /\\        \\ \\    / /_   _/ ____|__   __/ __ \\|  __ \\ \\   / /	" << endl;
		cout << "            | |  | |__     /  \\   | \\  / |      /  \\        \\ \\  / /  | || |       | | | |  | | |__) \\ \\_/ / 	" << endl;
		cout << "            | |  |  __|   / /\\ \\  | |\\/| |     / /\\ \\        \\ \\/ /   | || |       | | | |  | |  _  / \\   /  	" << endl;
		cout << "            | |  | |____ / ____ \\ | |  | |    / ____ \\        \\  /   _| || |____   | | | |__| | | \\ \\  | |   	" << endl;
		cout << "            |_|  |______/_/    \\_\\|_|  |_|   /_/    \\_\\        \\/   |_____\\_____|  |_|  \\____/|_|  \\_\\ |_|    " << endl;
	}

	if (B.NumOfUnit())
	{
		for (int i = 0; i < 10; i++)
			cout << endl;
		cout << "          _______ ______           __  __     ____      __      _______ _____ _______ ____  _______     __ " << endl;
		cout << "         |__   __|  ____|   /\\    |  \\/  |   |  _ \\     \\ \\    / /_   _/ ____|__   __/ __ \\|  __ \\ \\   / / " << endl;
		cout << "            | |  | |__     /  \\   | \\  / |   | |_) |     \\ \\  / /  | || |       | | | |  | | |__) \\ \\_/ /  " << endl;
		cout << "            | |  |  __|   / /\\ \\  | |\\/| |   |  _ <       \\ \\/ /   | || |       | | | |  | |  _  / \\   /   " << endl;
		cout << "            | |  | |____ / ____ \\ | |  | |   | |_) |       \\  /   _| || |____   | | | |__| | | \\ \\  | |    " << endl;
		cout << "            |_|  |______/_/    \\_\\|_|  |_|   |____/         \\/   |_____\\_____|  |_|  \\____/|_|  \\_\\ |_|    " << endl;
	}
}


GAME::~GAME()
{
}
