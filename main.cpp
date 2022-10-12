//Matriz examen parcial

#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <iomanip>
#include "libreria.h"

using namespace std;

#define	GREEN 	"\x1B[32m"
#define	OTRO 	"\x1B[30m"
#define	DF 		"\x1B[39m"


int main() {
	
    encabezado("Examen_parcial");
	
	std::system("cls");
	int opt{0};
	int matriz[10][10];
	while (true) {
		switch(opt) {
			case 0:
				cout<<"\nElija una opcion:\n<1> Crea una matriz con valores aleatorios.\n<2>Imprima la matriz\n<3>Modifica un valor especifico de la matriz.\n<4>Convierte los valores en la diagonal de la matriz por valores igual a cero.\n<5>Ingresa 3 valores y se buscara cuantas veces se encuentran esos valores en la matriz\n<7>Multiplos de 5 por 10.\n<8>Transpuesta";
				cout<<"\n" << ">>";
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
			case 4:
				funcion_04(matriz);
				opt=0;
				break;
			case 5: {
                int a,b,c;
                int a1{0},b1{0},c1{0};
                cout<<"\nIngresa el primer numero a buscar\n>>";
                cin>>a;
                cout<<"\nIngresa el segundo numero a buscar\n>>";
                cin>>b;
                cout<<"\nIngresa el tercer numero a buscar\n>>";
                cin>>c;
                funcion_05(matriz,a,b,c,a1,b1,c1);
                cout<< GREEN <<"El numero "<< DF <<a<<" se repite "<<a1<<" veces.\n";
                cout<< GREEN <<"El numero "<< DF <<b<<" se repite "<<b1<<" veces.\n";
                cout<< GREEN <<"El numero "<< DF <<c<<" se repite "<<c1<<" veces.\n";
                opt=0;
                break; }	
			case 7:
				funcion_07(matriz);
				opt=0;
				break;
			case 8:
				funcion_08(matriz);
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