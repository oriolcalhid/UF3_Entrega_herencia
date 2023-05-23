#include <iostream>
#include <conio.h>
#include "Enemigo.h"
#include "EnemigoFinal.h"
#include "Jugador.h"
using namespace std;

int main() {

	srand(time(NULL));
	//CREAMOS EL JUGADOR
	Jugador oriol(1000, "Oriol", 700, 3, 0);
	//CREAMOS LOS ENEMIGOS
	Enemigo soldado(50, "Soldado", 300);
	Enemigo soldado1(50, "Soldado1", 300);
	Enemigo soldado2(50, "Soldado2", 300);
	Enemigo soldado3(50, "Soldado3", 300);
	//CREAMOS UN ENEMIGO FINAL QUE HEREDA DE ENEMIGO
	EnemigoFinal cazador(1000, "Cazador", 300, 400, 500);
	//PROBAMOS LOS MÉTODOS PROPIOS
	soldado.printStatus();
	cazador.printAllStats();
	oriol.printStats();

	char entorno[10][7] = {

		
		{ '|', '*','*', '*', '*', '*', '|'},
		{ '|', '*','*', '*', '*', '*', '|'},
		{ '|', '*','*', '*', '*', '*', '|'},
		{ '|', '*','*', '*', '*', '*', '|'},
		{ '|', '*','*', '*', '*', '*', '|'},
		{ '|', '*','*', '*', '*', '*', '|'},
		{ '|', '*','*', '*', '*', '*', '|'},
		{ '|', '*','*', '*', '*', '*', '|'},
		{ '|', '*','*', '*', '*', '*', '|'},
		{ '|', '*','*', '*', '*', '*', '|'},
	};

	while (oriol.getY() != 9) {

		entorno[oriol.getY()][oriol.getX()] = 2;
		cout << "\n" << "\n"<< endl;
		cout << "Bienvenido a el Gran Juego!\n";
		cout << " -----------------------------------------------";
		for (int fila = 0; fila < 10; fila++) {
			cout << "\n";
			for (int columna = 0; columna < 7; columna++) {

				cout << entorno[fila][columna] << "\t";
			}
			cout << endl;
		}
		cout << " -----------------------------------------------";

		char key = _getch();
		system("cls");

		if (key == 'w' || key == 'W') {
			if (oriol.getY() == 0)
			{

			}
			else {
				entorno[oriol.getY()][oriol.getX()] = '*';
				oriol.setY(oriol.getY() - 1);
				entorno[oriol.getY()][oriol.getX()] = 2;
			}

		}
		else if (key == 'a' || key == 'A'){
			if (oriol.getX() == 1) {

			}
			else {
				entorno[oriol.getY()][oriol.getX()] = '*';
				oriol.setX(oriol.getX() - 1);
				entorno[oriol.getY()][oriol.getX()] = 2;
			}

		}
		else if (key == 's' || key == 'S') {
			if (oriol.getY() == 9)
			{

			}
			else {
				entorno[oriol.getY()][oriol.getX()] = '*';
				oriol.setY(oriol.getY() + 1);
				entorno[oriol.getY()][oriol.getX()] = 2;
			}

		}
		else if (key == 'd' || key == 'D') {
			if (oriol.getX() == 5)
			{

			}
			else {
				entorno[oriol.getY()][oriol.getX()] = '*';
				oriol.setX(oriol.getX() + 1);
				entorno[oriol.getY()][oriol.getX()] = 2;
			}
		}
	}

	cout << "Vas a enfrentarte a el " << cazador.getName() << "\n";
	while (oriol.getHp() > 0 && cazador.getHp() > 0)
	{

		int random = 0;
		random = (rand() % 10) + 1;
 
		if (random== 5)
		{

			cout << "\nEl "<< cazador.getName() << " realizara ataque especial con un danyo de : " << cazador.getRifleCaza() << "\n";

			oriol.setHp(oriol.getHp() - cazador.getRifleCaza());

			cout << oriol.getName() << " realizara un ataque con un danyo de: " << oriol.getAttack() << "\n";

			cazador.setHp(cazador.getHp() - oriol.getAttack());
		}
		else if (random == 7) {


			cout << "\nEl " << cazador.getName() << " lanzara una granada que realizara un danyo de: " << cazador.getGranada() << "\n";

			oriol.setHp(oriol.getHp() - cazador.getGranada());

			cout << oriol.getName() << " realizara un ataque con un danyo de: " << oriol.getAttack() << "\n";

			cazador.setHp(cazador.getHp() - oriol.getAttack());
		}
		else {

			cout << "\nEl " << cazador.getName() << " atacara normal con un danyo de: " << cazador.getAttack() << "\n";

			oriol.setHp(oriol.getHp() - cazador.getAttack());

			cout <<  oriol.getName() << " realizara un ataque con un danyo de: " << oriol.getAttack() << "\n";

			cazador.setHp(cazador.getHp() - oriol.getAttack());

		}
	}

	if (oriol.getHp() <= 0)
	{
		cout <<  "\nGame over.";
	}
	else if(cazador.getHp() <= 0) {
		cout << "\nVictoria!!!";
	}

}