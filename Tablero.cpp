#include<iostream>
#include "Tablero.h"
using namespace std;

Tablero::Tablero() 
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

bool Tablero::get_jterminado()
{
	return jterminado;
}
