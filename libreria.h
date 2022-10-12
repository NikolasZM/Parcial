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

void funcion_04(int (&mat)[10][10]){
	for(int fila{0}; fila < 10 ; ++fila){
		for(int columna{0}; columna < 10 ; ++columna){

			if(fila == columna){
				mat[fila][columna] = 0;
			}

		}
	}
	cout<<GREEN<<"\nLa digonal es igual a 0.\n"<<DF;
}

void funcion_05(int mat[10][10],int a,int b,int c,int &a1,int &b1,int &c1) {
    for (int i{0};i<10;++i) {
        for (int j{0};j<10;++j) {
            if (mat[i][j]==a) {
                ++a1;
            }else if (mat[i][j]==b) {
                ++b1;
            }else if (mat[i][j]==c) {
                ++c1;
            }else {
                continue;
            }
        }
    }
}

void funcion_08(int (&mat)[10][10]){

	int aux[10][10];

	for(int fila{0}; fila < 10 ; ++fila){
		for(int columna{0}; columna < 10 ; ++columna){
			aux[fila][columna] = mat[columna][fila];
		}
	}

	for(int fila{0}; fila < 10 ; ++fila){
		for(int columna{0}; columna < 10 ; ++columna){
			mat[fila][columna] = aux[fila][columna];
		}
	}


	cout<<GREEN<<"\nLa matriz fue transpuesta\n"<<DF;
}