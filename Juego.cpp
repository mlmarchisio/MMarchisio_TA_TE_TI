#include "Juego.h"
#include <iostream>
#include <conio2.h>
using namespace std;

Juego::Juego() 								//constructor
{
	contador_fichas = 0;
	game_over = false;
	for (int j = 0 ; j < 3 ; j++)			// se completa el arreglo con los numeros de las teclas que corresponden a cada posicion
	{
		array [0][j] = j+7;
	}
	for (int j = 0 ; j < 3 ; j++)
	{
		array [1][j] = j+4;
	}
	for (int j = 0 ; j < 3 ; j++)
	{
		array [2][j] = j+1;
	}
}

void Juego::mostrar_instrucciones()
{
	textcolor (14);
	cout<<"TA TE TI"<<endl<<endl;			//titulo del juego
	textcolor(15);
	cout<<"El jugador 1 juega con las fichas X."<<endl;				//aca inician las indicaciones de como jugar
	cout<<"El jugador 2 juega con las fichas O."<<endl<<endl;
	cout<<"Mediante el teclado numerico se introducen las fichas en el tablero."<<endl<<endl;
	textcolor (14);
	cout<<"Tecla 7 => pocision A1		Tecla 8 => pocision B1		Tecla 9 => pocision C1"<<endl;
	cout<<"Tecla 4 => pocision A2		Tecla 5 => pocision B2		Tecla 6 => pocision C2"<<endl;
	cout<<"Tecla 1 => pocision A3		Tecla 2 => pocision B3		Tecla 3 => pocision C3"<<endl<<endl;
	textcolor (15);
	cout<<"A continuacion se muestra el tablero de juego donde se informa la tecla numerica a usar para introducir la ficha:"<<endl<<endl;
	
	textcolor (14);
	
	cout<<"      A     B     C   "<<endl;		// se muestra el arreglo con las coordenadas, esto muestra el tablero con lo numeros correspondientes a cada tecla y su ubicación
	cout<<"   -------------------"<<endl;
	
	for (int i = 0 ; i < 3 ; i++)
	{
		cout<<" "<<i+1<<" |";
		
		for (int j = 0 ; j < 3 ; j++)
		{
			
			cout<<"  "<<array [i][j]<<"  |"; 
		}
		
		cout<<endl;
		cout<<"   -------------------"<<endl;
	}
	
	cout<<endl;
}

void Juego::jugar()											//metodo que controla el juego
{
	while(game_over == false && contador_fichas < 9)		//inicia el juego, se controla con el booleano game_over que se vuelve true cuando hay un ganador
	{														//a su vez se sale del while cuando se ocuparon todas las posiciones dentro del tablero
		//juega jugador 1
		
		cout<<endl;
		textcolor(contador_fichas+1);
		cout<<"Juega el jugador 1 (X)"<<endl;
		cout<<"Elije una posicion donde colocar tu ficha X"<<endl;
		FicX.elegir_pos();											//se utiliza el metodo elegir_pos de la clase Ficha para seleccionar una posición donde colocar la ficha X
		T1.set_tablero (FicX.get_posicionX() , FicX.get_posicionY() , 'X');		//se coloca la ficha en el tablero, se pasan la posición y el tipo de ficha que se coloca
		textcolor (14);
		T1.mostrar_tab();											//se muesra el tablero con la/s fichaa/s depositada/s en el tablero
		T1.ganador();												//se llama al metodo que verifica si hay ganador
		game_over = T1.get_jterminado();							//si hay ganador el juego termina, el booleano jterminado se vuelve true y se accede a el mediante el get de la clase Tablero
		contador_fichas = contador_fichas + 1;						//contador de fichas agregadas al tablero
		
		
		//juega jugador 2
		if (game_over == false && contador_fichas < 9)				//este if evita que el jugador 2 siga jugando una vez terminada la partida
		{
			cout<<endl;
			textcolor(contador_fichas+1);
			cout<<"Juega el jugador 2 (O)"<<endl;
			cout<<"Elije una posicion donde colocar tu ficha O"<<endl;
			FicX.elegir_pos();											// se repite lo mismo que para el jugador 1, solo se cambia el tipo de ficha de X a O
			T1.set_tablero (FicX.get_posicionX() , FicX.get_posicionY() , 'O');
			textcolor (14);
			T1.mostrar_tab();
			T1.ganador();
			game_over = T1.get_jterminado();
			contador_fichas = contador_fichas + 1;
		}
	}
	
	if (contador_fichas == 9 && T1.get_jterminado() == false)				//mensaje que se ejecuta cuando no hay ganador, es decir, se colocaron todas las fichas
	{																		//y no hay ta te ti
		cout<<endl;
		textcolor (contador_fichas+1);
		cout<<"Juego terminado, no hay ganador."<<endl;
	}
}
