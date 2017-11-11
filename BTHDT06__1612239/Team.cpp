#include "Team.h"
#include<iomanip>
#define N 5
#define N_Unit 3

Team::Team(string UnitName)
{

	if (UnitName == "Terran")
	{
		for (int i = 0; i < N; i++)
		{
			switch (rand() % N_Unit)
			{
			case 1:
			{
				Unit *crep = new Marine();
				this->team.push_back(crep);
				break;
			}
			case 2:
			{
				Unit *crep = new Firebat();
				this->team.push_back(crep);
				break;
			}
			case 0:
			{
				Unit *crep = new Wraith();
				this->team.push_back(crep);
				break;
			}
			}
		}
	}
	else if (UnitName == "Protoss")
	{
		for (int i = 0; i < N; i++)
		{
			switch (CRand::generateRandnNumab(0, N_Unit))
			{
			case 1:
			{
				Unit *crep = new Zealot();
				this->team.push_back(crep);
				break;
			}
			case 2:
			{
				Unit *crep = new Dragoon();
				this->team.push_back(crep);
				break;
			}
			case 0:
			{
				Unit *crep = new Scout();
				this->team.push_back(crep);
				break;
			}
			}
		}
	}
}


int Team::NumOfUnit()
{
	return this->team.size();
}

void Team::showTeam()
{
	for (int i = 0; i < this->team.size(); i++)
	{
		this->team[i]->showInfo();
		cout << endl;
	}
}

Unit * Team::getUnit(int i)
{
	return this->team[i];
}

void Team::attackMode0(Team & enemyTeam)
{
	for (int i = 0; i < this->NumOfUnit(); i++)
	{
		cout << setw(15) << " ";
		this->team[i]->showInfo();
		cout << " attack ";
		enemyTeam.team[i]->showInfo();
		cout << " --> ";
		if (enemyTeam.team[i]->MoveMode().compare("Ground") == 0)
		{
			enemyTeam.team[i]->beAttacked(this->team[i]->GroundAttack());
		}
		else
		{
			enemyTeam.team[i]->beAttacked(this->team[i]->AirAttack());
		}
		enemyTeam.team[i]->showInfo();
		cout << endl;
		if (enemyTeam.team[i]->getHP() == 0)
		{
			enemyTeam.team.erase(enemyTeam.team.begin() + i);
		}
	}
}

void Team::attackMode1(Team & enemyTeam)
{
	for (int i = 0; i < this->NumOfUnit() && enemyTeam.NumOfUnit() != 0; i++)
	{
		cout << setw(15) << " ";
		int j = CRand::generateRandnNumab(0, enemyTeam.NumOfUnit());
		this->team[i]->showInfo();
		cout << " attack ";
		enemyTeam.team[j]->showInfo();
		cout << " --> ";
		if (enemyTeam.team[j]->MoveMode().compare("Ground") == 0)
		{
			enemyTeam.team[j]->beAttacked(this->team[i]->GroundAttack());
		}
		else
		{
			enemyTeam.team[j]->beAttacked(this->team[i]->AirAttack());
		}
		enemyTeam.team[j]->showInfo();
		cout << endl;
		if (enemyTeam.team[j]->getHP() == 0)
		{
			enemyTeam.team.erase(enemyTeam.team.begin() + j);
		}
	}

}

void Team::attackMode2(Team & enemyTeam)
{
	
	for (int i = 0; i < this->NumOfUnit() && enemyTeam.NumOfUnit() != 0; i++)
	{
		cout << setw(15) << " ";
		int j = CRand::generateRandnNumab(0, enemyTeam.NumOfUnit());
		this->team[i]->showInfo();
		cout << " attack ";

		if (this->team[i]->AirAttack() != 0)
		{
			enemyTeam.team[j]->showInfo();
			cout << " --> ";
			if (enemyTeam.team[j]->MoveMode().compare("Ground") == 0)
			{
				enemyTeam.team[j]->beAttacked(this->team[i]->GroundAttack());
			}
			else
			{
				enemyTeam.team[j]->beAttacked(this->team[i]->AirAttack());
			}
			enemyTeam.team[j]->showInfo();
			cout << endl;
			if (enemyTeam.team[j]->getHP() == 0)
			{
				enemyTeam.team.erase(enemyTeam.team.begin() + j);
			}
		}
		else
		{
			int k;
			for (k = 0; k < enemyTeam.NumOfUnit(); k++)
			{
				if (enemyTeam.team[k]->MoveMode().compare("Ground") == 0)
					break;
			}
			if (k == enemyTeam.NumOfUnit())
			{
				cout << "\b\b\b\b\b\b\b can't attack!" << endl;
				continue;
			}
			while (enemyTeam.team[j]->MoveMode().compare("Ground") != 0 )
			{
				j = CRand::generateRandnNumab(0, enemyTeam.NumOfUnit());
			}
			enemyTeam.team[j]->showInfo();
			cout << " --> ";
			enemyTeam.team[j]->beAttacked(this->team[i]->GroundAttack());
			enemyTeam.team[j]->showInfo();
			cout << endl;
			if (enemyTeam.team[j]->getHP() == 0)
			{
				enemyTeam.team.erase(enemyTeam.team.begin() + j);
			}
		}
	}
}

void Team::attackMode3(Team & enemyTeam)
{

	for (int i = 0; i < this->NumOfUnit() && enemyTeam.NumOfUnit() != 0; i++)
	{
		cout << setw(15) << " ";
		this->team[i]->showInfo();
		cout << " attack ";

		if (this->team[i]->AirAttack() != 0)
		{
			int j = 0;
			for (int k = 1; k < enemyTeam.NumOfUnit(); k++)
			{
				if (enemyTeam.team[j]->getHP() > enemyTeam.team[k]->getHP())
					j = k;
			}
			enemyTeam.team[j]->showInfo();
			cout << " --> ";
			if (enemyTeam.team[j]->MoveMode().compare("Ground") == 0)
			{
				enemyTeam.team[j]->beAttacked(this->team[i]->GroundAttack());
			}
			else
			{
				enemyTeam.team[j]->beAttacked(this->team[i]->AirAttack());
			}
			enemyTeam.team[j]->showInfo();
			cout << endl;
			if (enemyTeam.team[j]->getHP() == 0)
			{
				enemyTeam.team.erase(enemyTeam.team.begin() + j);
			}
		}
		else
		{
			int j = 0;	
			while (j < enemyTeam.NumOfUnit() && enemyTeam.team[j]->MoveMode().compare("Ground") != 0)
			{
				j++;
			}
			if (j == enemyTeam.NumOfUnit() )
			{
				cout << "\b\b\b\b\b\b\b can't attack!" << endl;
			}
			else
			{
				for (int k = j + 1; k < enemyTeam.NumOfUnit(); k++)
				{
					if (enemyTeam.team[j]->getHP() > enemyTeam.team[k]->getHP())
						j = k;
				}

				enemyTeam.team[j]->showInfo();
				cout << " --> ";
				enemyTeam.team[j]->beAttacked(this->team[i]->GroundAttack());
				enemyTeam.team[j]->showInfo();
				cout << endl;
				if (enemyTeam.team[j]->getHP() == 0)
				{
					enemyTeam.team.erase(enemyTeam.team.begin() + j);
				}
			}
		}
	}
}

void Team::attackMode4(Team & enemyTeam)
{

	for (int i = 0; i < this->NumOfUnit() && enemyTeam.NumOfUnit() != 0; i++)
	{
		cout << setw(15) << " ";
		this->team[i]->showInfo();
		cout << " attack ";

		if (this->team[i]->AirAttack() != 0)
		{
			if (this->team[i]->MoveMode().compare("Ground") == 0)
			{
				int j = 0;
				for (int k = 1; k < enemyTeam.NumOfUnit(); k++)
				{
					if (enemyTeam.team[j]->GroundAttack() > enemyTeam.team[k]->GroundAttack())
						j = k;
				}
				enemyTeam.team[j]->showInfo();
				cout << " --> ";
				if (enemyTeam.team[j]->MoveMode().compare("Ground") == 0)
				{
					enemyTeam.team[j]->beAttacked(this->team[i]->GroundAttack());
				}
				else
				{
					enemyTeam.team[j]->beAttacked(this->team[i]->AirAttack());
				}
				enemyTeam.team[j]->showInfo();
				cout << endl;
				if (enemyTeam.team[j]->getHP() == 0)
				{
					enemyTeam.team.erase(enemyTeam.team.begin() + j);
				}
			}
			else
			{
				int j = 0;
				for (int k = 1; k < enemyTeam.NumOfUnit(); k++)
				{
					if (enemyTeam.team[j]->AirAttack() > enemyTeam.team[k]->AirAttack())
						j = k;
				}
				enemyTeam.team[j]->showInfo();
				cout << " --> ";
				if (enemyTeam.team[j]->MoveMode().compare("Ground") == 0)
				{
					enemyTeam.team[j]->beAttacked(this->team[i]->GroundAttack());
				}
				else
				{
					enemyTeam.team[j]->beAttacked(this->team[i]->AirAttack());
				}
				enemyTeam.team[j]->showInfo();
				cout << endl;
				if (enemyTeam.team[j]->getHP() == 0)
				{
					enemyTeam.team.erase(enemyTeam.team.begin() + j);
				}
			}
		}
		else
		{
			int j = 0;

			while (j < enemyTeam.NumOfUnit() && enemyTeam.team[j]->MoveMode().compare("Ground") != 0)
			{
				j++;
			}
			if (j == enemyTeam.NumOfUnit())
			{
				cout << "\b\b\b\b\b\b\b can't attack!" << endl;
			}
			else
			{
				for (int k = j + 1; k < enemyTeam.NumOfUnit(); k++)
				{
					if (enemyTeam.team[j]->GroundAttack() < enemyTeam.team[k]->GroundAttack())
						j = k;
				}

				enemyTeam.team[j]->showInfo();
				cout << " --> ";
				enemyTeam.team[j]->beAttacked(this->team[i]->GroundAttack());
				enemyTeam.team[j]->showInfo();
				cout << endl;
				if (enemyTeam.team[j]->getHP() == 0)
				{
					enemyTeam.team.erase(enemyTeam.team.begin() + j);
				}
			}
		}
	}
}

Team::~Team()
{
	for (int i = 0; i < team.size(); i++)
		team.erase(team.begin() + i);
}
