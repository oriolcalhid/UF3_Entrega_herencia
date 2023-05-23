#pragma once
#include <iostream>
using namespace std;
class Jugador //CREACI�N DE LA CLASE
{
private:
	int hp;
	string name;
	int attack;
	int positionX;
	int positionY;

public:
	//constructor con par�metros de entrada
	Jugador(int pHp, string pName, int pAttack, int pX, int pY);

	//Construcci�n vac�o
	Jugador();

	//getters
	int getHp();
	string getName();
	int getAttack();
	int getX();
	int getY();


	//setters
	void setHp(int php);
	void setName(string pname);
	void setAttack(int pattack);
	void setX(int pX);
	void setY(int pY);

	//metodos propios
	void printStats();
};