#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <iomanip>

using namespace std;

#define	GREEN 	"\x1B[32m"
#define	DF 		"\x1B[39m"


void encabezado(char x[]){
    cout << "   _______________________________________________\n";
	cout << " /|                                               |\n";
	cout << "| |           Jean Marc Nadeau Huamani            |\n";
	cout << "| |         Nikolas Ymanol Zuñiga Monroy          |\n";
	cout << "| |                     CComp1                    |\n";
	cout << "| |_______________________________________________|\n";
	cout << "|/________________________________________________/\n";
	cout << "--------------------"<< x <<"-----------------\n\n";
}


void crearMatriz(int (&mat)[10][10]) {		//funcion_01
	srand(time(NULL));
	for (int i{0};i<10;++i) {
		for (int j{0};j<10;++j) {
			mat[i][j]=rand() % 100;
		}
	}
	cout<<GREEN<<"\nMatriz Creada\n"<<DF;
}

void mostrarMatriz(int mat[10][10]) {		//funcion_02
	for (int i{0};i<10;++i) {
		cout<<"| ";
		for (int j{0};j<10;++j) {	
			cout<<setw(3)<<mat[i][j]<<" ";
		}
		cout<<"|\n";
	}
}

void funcion_03(int (&mat)[10][10]) {
	int fil,col,x;
	cout<<"\nIngresa el valor de las filas.";
	cin>>fil;
	cout<<"\nIngresa el valor de las columnas.";
	cin>>col;
	cout<<"\nIngresa el nuevo valor.";
	cin>>x;
	mat[fil][col]=x;
	cout<<GREEN<<"\nEl valor fue modificado exitosamente.\n"<<DF;

}