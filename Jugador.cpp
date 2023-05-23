#include "jugador.h"
#include <iostream>
#include "windows.h"
using namespace std;
//TODOS LOS MÉTODOS Y EL CONSTRUCCIÓN TIENEN QUE HACER REFERENCIA A LA
//CLASE, EN ESTE CASO, A ENEMIGO
//constructor
Jugador::Jugador(int pHp, string pName, int pAttack, int pX, int pY) {
	hp = pHp;
	name = pName;
	attack = pAttack;
	positionX = pX;
	positionY = pY;
}
//getters
int Jugador::getHp() {
	return hp;
}
string Jugador::getName() {
	return name;
}
int Jugador::getAttack() {
	return attack;
}
int Jugador::getX() {
	return positionX;
}
int Jugador::getY() {
	return positionY;
}
//setters
void Jugador::setHp(int php) {
	hp = php;
}
void Jugador::setName(string pname) {
	name = pname;
}
void Jugador::setAttack(int pattack) {
	attack = pattack;
}
void Jugador::setX(int pX) {
	positionX = pX;
}
void Jugador::setY(int pY) {
	positionY = pY;
}
//Metodos propios
void Jugador::printStats() {
}