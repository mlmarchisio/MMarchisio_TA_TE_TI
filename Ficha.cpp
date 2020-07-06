#include "Ficha.h"
#include <conio.h>

Ficha::Ficha() 
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

int Ficha::get_posicionX ()
{
	return posicionX;
}
int Ficha::get_posicionY ()
{
	return posicionY;
}
