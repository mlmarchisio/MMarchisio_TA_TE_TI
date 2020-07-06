#include<iostream>
#include <conio.h>
#include "Tablero.h"
#include "Ficha.h"
#include "Juego.h"
using namespace std;

int main (int argc, char *argv[]) {			//función principal
	
	Juego J1;								//se crea el objeto J1
	J1.mostrar_instrucciones();				//se usa el metodo que muetra las instrucciones del juego
	J1.jugar();								//se usa el método que permite jugar
	
	return 0;
}

