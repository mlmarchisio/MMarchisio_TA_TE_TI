#ifndef JUEGO_H
#define JUEGO_H
#include "Tablero.h"
#include "Ficha.h"

class Juego {
public:
	Juego();
	void mostrar_instrucciones();
	void jugar();
		
private:
	int contador_fichas;				//un contador de fichas agregadas, lo usamos para terminar el juego cuando el tablero se llenó de fichas y no hay ganador
	bool game_over;					//booleano para controlar el while donde se encuentra el juego
	int array [3][3];						//arreglo para mostrar que tecla numerica corresponde a cada posición dentro del tablero
	Tablero T1;								//obejto tablero T1
	Ficha FicX;
	
};

#endif

