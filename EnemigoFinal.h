#pragma once
#include "Enemigo.h"
#include <iostream>
using namespace std;
//INDICA QUE HEREDA DE LA CLASE ENEMIGO Y QUE HAY VISIBILIDAD A LA HORA DE
//INSTANCIAR LOS OBJETOS GRACIAS A PUBLIC
class EnemigoFinal : public Enemigo
{
private:
	int RifleCaza;
	int Granada;
public:
	//CONSTRUCTOR CON ELEMENTOS DE LA CLASE PADRE Y PROPIA
	EnemigoFinal(int pHp,
		string pName,
		int pAttack,
		int pRifleCaza,
		int pGranada);

	//GETTERS AND SETTERS
	int getRifleCaza();
	int getGranada();
	void setRifleCaza(int pRifleCaza);
	void setGranada(int pGranada);

	//METODOS PROPIOS
	void printAllStats();
};
