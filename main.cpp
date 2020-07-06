#include<iostream>
#include <conio.h>
#include "Tablero.h"
#include "Ficha.h"
#include "Juego.h"
using namespace std;

int main (int argc, char *argv[]) {			//función principal
	
	Juego J1;
	J1.mostrar_instrucciones();
	J1.jugar();
	
	return 0;
}

