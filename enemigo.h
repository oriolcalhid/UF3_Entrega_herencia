#pragma once
#include <iostream>
using namespace std;
class Enemigo //CREACI�N DE LA CLASE
{
private:
	int hp;
	string name;
	int attack;

public:
	//constructor con par�metros de entrada
	Enemigo(int pHp, string pName, int pAttack);

	//Construcci�n vac�o
	Enemigo();

	//getters
	int getHp();
	string getName();
	int getAttack();

	//setters
	void setHp(int php);
	void setName(string pname);
	void setAttack(int pattack);

	//metodos propios
	void printStatus();
};
