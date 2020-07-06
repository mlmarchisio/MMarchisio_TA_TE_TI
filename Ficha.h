#ifndef FICHA_H
#define FICHA_H

class Ficha {
public:
	void elegir_pos ();	
	int get_posicionX ();
	int get_posicionY ();
	Ficha();
private:
	int posicionX;				//atributos de posici�n, a partir de presionar una tecla de numero se generaran ambos valores (posicion X e Y)
	int posicionY;
	bool t1 = false;			//booleanos para inabilitar una tecla, despu�s de que ya se agreg� una ficha en el tablero
	bool t2 = false;
	bool t3 = false;
	bool t4 = false;
	bool t5 = false;
	bool t6 = false;
	bool t7 = false;
	bool t8 = false;
	bool t9 = false;
};

#endif

