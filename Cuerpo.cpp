#include "EnemigoFinal.h"
using namespace std;
#include "windows.h"
//CONSTRUCTOR
//TIENE COMO PARÁMETROS DE ENTRADA LOS ATRIBUTOS PROPIOS
//Y LOS ATRIBUTOS DE LA CLASE QUE HEREDA
//LOS PARÁMETROS DE LA CLASE QUE HEREDA SE PASAN COMO PARÁMETROS DE ENTRADA
//AL CONSTRUCTOR HEREDADO
EnemigoFinal::EnemigoFinal(int pHp,
	string pName,
	int pAttack,
	int pRifleCaza,
	int pGranada) : Enemigo
	(pHp, pName, pAttack) {
	RifleCaza = pRifleCaza;
	Granada = pGranada;
}
//GETTERS AND SETTERS
int EnemigoFinal::getRifleCaza() {
	return RifleCaza;
}
int EnemigoFinal::getGranada() {
	return Granada;
}
void EnemigoFinal::setRifleCaza(int pRifleCaza) {
	RifleCaza = pRifleCaza;
}
void EnemigoFinal::setGranada(int pGranada) {
	Granada = pGranada;
}
//METODOS PROPIOS
void EnemigoFinal::printAllStats() {
}