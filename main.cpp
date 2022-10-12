//Matriz examen parcial

#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <iomanip>
#include "libreria.h"

using namespace std;

#define	GREEN 	"\x1B[32m"
#define	DF 		"\x1B[39m"


int main() {
	
    encabezado("Examen_parcial");
	
	std::system("cls");
	int opt{0};
	int matriz[10][10];
	while (true) {
		switch(opt) {
			case 0:
				cout<<"\nElija una opción:\n<1> Crea una matriz con valores aleatorios.\n<2>Imprima la matriz\n<3>Modifica un valor especifico de la matriz.";
				cout<<">>";
				cin>>opt;
				break;
			case 1:
				crearMatriz(matriz);
				opt=0;
				break;
			case 2:
				mostrarMatriz(matriz);
				opt=0;
				break;
			case 3:
				funcion_03(matriz);
				opt=0;
				break;
			case 9:
				cout<<"bye";
				return 0;
			default:
				cout<<"Opcion invalida";
				opt=0;
				break;
		}
	}
}