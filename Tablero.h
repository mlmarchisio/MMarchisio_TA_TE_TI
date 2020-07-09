#ifndef TABLERO_H
#define TABLERO_H

class Tablero {
public:
	void mostrar_tab();								//método que muestra el tablero, con las fichas que se van agregando
	void set_tablero(int posX, int posY, char XoO);	// metodo que posiciona la ficha (X o O) en el tablero
	void ganador ();
	bool get_jterminado();
	Tablero();
private:
	char tablero[3][3];				//atributos de la clase. Mapa del tablero
	bool jterminado = false;		//booleano para terminar el juego cuando hay un ganador
	
	
};

#endif

