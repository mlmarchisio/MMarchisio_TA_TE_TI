#include<iostream>
#include <ctime>
#include <conio.h>
#include <windows.h>
using namespace std;

class Tablero			//clase Tablero: se usa para generar el tablero de juego muestra el tablero a medida que
{						// se van colocando las fichas contine la lógica para resolver si hay un ganador
public:					// 
	char tablero[3][3];				//atributos de la clase
	bool jterminado = false;
public:												//métodos de la clase
	void mostrar_tab();								//método que muestra el tablero, con las fichas que se van agregando
	void set_tablero(int posX, int posY, char XoO);	// metodo que posiciona la ficha (X o O) en el tablero
	void ganador ();								//método con la lógica para evaluar si hay tres fichas iguales en fila, también informa al ganador
	Tablero();										//constructor de la clase
};

Tablero::Tablero ()									//declaración del constructor Tablero, se inicia el tablero vacío
{
	for (int i = 0 ; i < 3 ; i++)
	{
		for (int j = 0 ; j < 3 ; j++)
		{
			tablero [i][j] = ' ';
		}
	}
}

void Tablero::mostrar_tab()							//metodo que muestra el tablero, además se agregaron las coordenadas para facilitar la compresión del juego
{
	cout<<"      A     B     C   "<<endl;
	cout<<"   -------------------"<<endl;
	for (int i = 0 ; i < 3 ; i++)
	{
		cout<<" "<<i+1<<" |";
		
		for (int j = 0 ; j < 3 ; j++)
		{
			
			cout<<"  "<<tablero [i][j]<<"  |"; 
		}
		
		cout<<endl;
		cout<<"   -------------------"<<endl;
	}
}

void Tablero::set_tablero(int posX, int posY, char XoO)	//metodo que pone cada ficha en el tablero (se pasa por parametro la posicion y el tipo de ficha)
{
	tablero [posX][posY] = XoO;
}

void Tablero::ganador()									//metodo que tiene la logica para verificar si hay un ganador e informa quien ganó
{														//aclaración: hice varios if para que quede más ordenado, pero podría hacer 1 por cada tipo de ficha con todas las condiciones posibles para ganar
	if (tablero[0][0] == 'X' && tablero[0][0] == tablero[0][1] && tablero[0][0] == tablero[0][2])
	{
		cout<<"Jugador 1 gana."<<endl;
		jterminado = true;
		
	}
	if (tablero[1][0] == 'X' && tablero[1][0] == tablero[1][1] && tablero[1][0] == tablero[1][2])
	{
		cout<<"Jugador 1 gana."<<endl;
		jterminado = true;
		
	}
	if (tablero[2][0] == 'X' && tablero[2][0] == tablero[2][1] && tablero[2][0] == tablero[2][2])
	{
		cout<<"Jugador 1 gana."<<endl;
		jterminado = true;
		
	}
	if (tablero[0][0] == 'X' && tablero[0][0] == tablero[1][0] && tablero[0][0] == tablero[2][0])
	{
		cout<<"Jugador 1 gana."<<endl;
		jterminado = true;
		
	}
	if (tablero[0][1] == 'X' && tablero[0][1] == tablero[1][1] && tablero[0][1] == tablero[2][1])
	{
		cout<<"Jugador 1 gana."<<endl;
		jterminado = true;
		
	}
	if (tablero[0][2] == 'X' && tablero[0][2] == tablero[1][2] && tablero[0][2] == tablero[2][2])
	{
		cout<<"Jugador 1 gana."<<endl;
		jterminado = true;
		
	}
	if (tablero[0][0] == 'X' && tablero[0][0] == tablero[1][1] && tablero[0][0] == tablero[2][2])
	{
		cout<<"Jugador 1 gana."<<endl;
		jterminado = true;
	}
	if (tablero[2][0] == 'X' && tablero[2][0] == tablero[1][1] && tablero[2][0] == tablero[0][2])
	{
		cout<<"Jugador 1 gana."<<endl;
		jterminado = true;
	}
	
	if (tablero[0][0] == 'O' && tablero[0][0] == tablero[0][1] && tablero[0][0] == tablero[0][2])
	{
		cout<<"Jugador 2 gana."<<endl;
		jterminado = true;
	}
	if (tablero[1][0] == 'O' && tablero[1][0] == tablero[1][1] && tablero[1][0] == tablero[1][2])
	{
		cout<<"Jugador 2 gana."<<endl;
		jterminado = true;
	}
	if (tablero[2][0] == 'O' && tablero[2][0] == tablero[2][1] && tablero[2][0] == tablero[2][2])
	{
		cout<<"Jugador 2 gana."<<endl;
		jterminado = true;
	}
	if (tablero[0][0] == 'O' && tablero[0][0] == tablero[1][0] && tablero[0][0] == tablero[2][0])
	{
		cout<<"Jugador 2 gana."<<endl;
		jterminado = true;
	}
	if (tablero[0][1] == 'O' && tablero[0][1] == tablero[1][1] && tablero[0][1] == tablero[2][1])
	{
		cout<<"Jugador 2 gana."<<endl;
		jterminado = true;
	}
	if (tablero[0][2] == 'O' && tablero[0][2] == tablero[1][2] && tablero[0][2] == tablero[2][2])
	{
		cout<<"Jugador 2 gana."<<endl;
		jterminado = true;
	}
	if (tablero[0][0] == 'O' && tablero[0][0] == tablero[1][1] && tablero[0][0] == tablero[2][2])
	{
		cout<<"Jugador 2 gana."<<endl;
		jterminado = true;
	}
	if (tablero[2][0] == 'O' && tablero[2][0] == tablero[1][1] && tablero[2][0] == tablero[0][2])
	{
		cout<<"Jugador 2 gana."<<endl;
		jterminado = true;
	}
}




class Ficha						//esta clase permite a los jugadores introducir fichas mediante acción de teclado (usamos el teclado numérico
{
public:
	int posicionX;				//atributos de posición, a partir de presionar una tecla de numero se generaran ambos valores (posicion X e Y)
	int posicionY;
	bool t1 = false;			//booleanos para inabilitar una tecla, después de que ya se agregó una ficha en el tablero
	bool t2 = false;
	bool t3 = false;
	bool t4 = false;
	bool t5 = false;
	bool t6 = false;
	bool t7 = false;
	bool t8 = false;
	bool t9 = false;
public:
	void elegir_pos ();				//metodo que permite la acción de teclado mata agregar fichas
	Ficha();						//constructor
};

Ficha::Ficha()						//contructor vacío
{
	
}

void Ficha::elegir_pos()			//metodo para agregar las fichas al tablero por acción de teclado
{
	
	bool pos_eleg = false;			//booleano para poder salir del while una vez que se presione una tecla numerica
	while(pos_eleg == false){
		
		
		if(kbhit()) { 
			int tecla=getch();
			
			switch(tecla)
			{
				
			case 49: //1
				if(t1 == false)		//los if permiten que una vez que se agregue una ficha en una posicion no se pueda agregar otra ficha en ese lugar
				{
				posicionX = 2;
				posicionY = 0;
				pos_eleg = true;
				t1 = true;
				}
				break;
			case 50: //2
				if(t2 == false)
				{
				posicionX = 2;
				posicionY = 1;
				pos_eleg = true;
				t2 = true;
				}
				break;
			case 51: //3
				if(t3 == false)
				{
				posicionX = 2;
				posicionY = 2;
				pos_eleg = true;
				t3 = true;
				}
				break;
			case 52: //4
				if(t4 == false)
				{
				posicionX = 1;
				posicionY = 0;
				pos_eleg = true;
				t4 = true; 
				}
				break;
			case 53: //5
				if (t5 == false)
				{
				posicionX = 1;
				posicionY = 1;
				pos_eleg = true;
				t5 = true;
				}
				break;
			case 54: //6
				if (t6 == false)
				{
				posicionX = 1;
				posicionY = 2;
				pos_eleg = true;
				t6 = true;
				}
				break;
			case 55: //7
				if (t7 == false)
				{
				posicionX = 0;
				posicionY = 0;
				pos_eleg = true;
				t7 = true;
				}
				break;
			case 56: //8
				if (t8 == false)
				{
				posicionX = 0;
				posicionY = 1;
				pos_eleg = true;
				t8 = true;
				}
				break;
			case 57: //9
				if (t9 == false)
				{
				posicionX = 0;
				posicionY = 2;
				pos_eleg = true;
				t9 = true;
				}
				break;
			}
			
		}
		
	}
}






int main (int argc, char *argv[]) {			//función principal
	
	cout<<"TA TE TI"<<endl<<endl;			//titulo del juego
	
	cout<<"El jugador 1 juega con las fichas X."<<endl;				//aca inician las indicaciones de como jugar
	cout<<"El jugador 2 juega con las fichas O."<<endl<<endl;
	cout<<"Mediante el teclado numerico se introducen las fichas en el tablero."<<endl<<endl;
	cout<<"Tecla 7 => pocision A1		Tecla 8 => pocision B1		Tecla 9 => pocision C1"<<endl;
	//cout<<"Tecla 8 => pocision B1"<<endl;
	//cout<<"Tecla 9 => pocision C1"<<endl;
	cout<<"Tecla 4 => pocision A2		Tecla 5 => pocision B2		Tecla 6 => pocision C2"<<endl;
	//cout<<"Tecla 5 => pocision B2"<<endl;
	//cout<<"Tecla 6 => pocision C2"<<endl;
	cout<<"Tecla 1 => pocision A3		Tecla 2 => pocision B3		Tecla 3 => pocision C3"<<endl<<endl;
	cout<<"A continuacion se muestra el tablero de juego donde se informa la tecla numerica a usar para introducir la ficha:"<<endl<<endl;
	
	int contador_fichas = 0;				//un contador de fichas agregadas, lo usamos para terminar el juego cuando el tablero se llenó de fichas y no hay ganador
	bool game_over = false;					//booleano para controlar el while donde se encuentra el juego
	int array [3][3];						//arreglo para mostrar que tecla numerica corresponde a cada posición dentro del tablero
	
	
	Tablero T1;								//obejto tablero T1
	Ficha FicX;								//objeto ficha FicX
	//T1.mostrar_tab();
	
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
	//cout<<"Mediante el teclado numerico se introducen las fichas en el tablero."<<endl<<endl;
	//cout<<"Tecla 7 => pocision A1		Tecla 8 => pocision B1		Tecla 9 => pocision C1"<<endl;
	//cout<<"Tecla 8 => pocision B1"<<endl;
	//cout<<"Tecla 9 => pocision C1"<<endl;
	//cout<<"Tecla 4 => pocision A2		Tecla 5 => pocision B2		Tecla 6 => pocision C2"<<endl;
	//cout<<"Tecla 5 => pocision B2"<<endl;
	//cout<<"Tecla 6 => pocision C2"<<endl;
	//cout<<"Tecla 1 => pocision A3		Tecla 2 => pocision B3		Tecla 3 => pocision C3"<<endl;
	//cout<<"Tecla 2 => pocision B3"<<endl;
	//cout<<"Tecla 3 => pocision C3"<<endl;				//aca termina la información e intrucciones del juego
	
while(game_over == false && contador_fichas < 9)		//inicia el juego, se controla con el booleano game_over que se vuelve true cuando hay un ganador
{														//a su vez se sale del while cuando se ocuparon todas las posiciones dentro del tablero
	//jugador 1
	
	cout<<endl;
	cout<<"Juega el jugador 1 (X)"<<endl;
	cout<<"Elije una posicion donde colocar tu ficha X"<<endl;
	FicX.elegir_pos();											//se utiliza el metodo Ficha para seleccionar una posición donde colocar la ficha X
	//cout<<FicX.posicionX<<endl;
	//cout<<FicX.posicionY<<endl;
	T1.set_tablero (FicX.posicionX , FicX.posicionY , 'X');		//se coloca la ficha en el tablero, se pasan la posición y el tipo de ficha que se coloca
	T1.mostrar_tab();											//se muesra el tablero con la/s fichaa/s depositada/s en el tablero
	T1.ganador();												//se llama al metodo que verifica si hay ganador
	game_over = T1.jterminado;									//si hay ganador el juego termina
	contador_fichas = contador_fichas + 1;						//contador de fichas agregadas al tablero
	
	
	//jugador 2
	if (game_over == false && contador_fichas < 9)				//este if evita que el jugador 2 siga jugando una vez terminada la partida
	{
	
	cout<<endl;
	cout<<"Juega el jugador 2 (O)"<<endl;
	cout<<"Elije una posicion donde colocar tu ficha O"<<endl;
	FicX.elegir_pos();											// se repite lo mismo que para el jugador 1
	
	//cout<<FicX.posicionX<<endl;
	//cout<<FicX.posicionY<<endl;
	T1.set_tablero (FicX.posicionX , FicX.posicionY , 'O');
	T1.mostrar_tab();
	T1.ganador();
	game_over = T1.jterminado;
	contador_fichas = contador_fichas + 1;
	}
}

if (contador_fichas == 9 && T1.jterminado == false)				//mensaje que se ejecuta cuando no hay ganador, es decir, se colocaron todas las fichas
{																//y no hay ta te ti
	cout<<endl;
	cout<<"Juego terminado, no hay ganador."<<endl;
}

	return 0;
}

