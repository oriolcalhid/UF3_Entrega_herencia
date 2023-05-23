#include "enemigo.h"
#include <iostream>
#include "windows.h"
using namespace std;
//TODOS LOS MÉTODOS Y EL CONSTRUCCIÓN TIENEN QUE HACER REFERENCIA A LA
//CLASE, EN ESTE CASO, A ENEMIGO
//constructor
Enemigo::Enemigo(int pHp, string pName, int pAttack) {
	hp = pHp;
	name = pName;
	attack = pAttack;
}
//getters
int Enemigo::getHp() {
	return hp;
}
string Enemigo::getName() {
	return name;
}
int Enemigo::getAttack() {
	return attack;
}
//setters
void Enemigo::setHp(int php) {
	hp = php;
}
void Enemigo::setName(string pname) {
	name = pname;
}
void Enemigo::setAttack(int pattack) {
	attack = pattack;
}
//Metodos propios
void Enemigo::printStatus() {
}