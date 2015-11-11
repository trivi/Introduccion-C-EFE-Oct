//El programa resuelve el sudoku almacenado en el archivo "sudoku_input.dat"

#include <iostream>
#include <fstream>

using namespace std;

void Leer(int sudoku[]);
void Escribir(int sudoku[], ofstream &salida);
void ResolverSudoku(int sudoku[], ofstream &salida, int pos=0);
bool Comprobar(int sudoku[], int pos);


int main () {
	
	int sudoku[81];		//"Matriz" donde almacenaremos el sudoku (usar el 0 para posiciones en blanco)
	
	
	//Creamos el objeto que nos permite escribir la salida en el fichero "sudoku_input.dat"
	ofstream salida;
	salida.open("sudoku_output.dat");
	
	
	//Leemos el sudoku desde el archivo "sudoku_input.dat"
	Leer(sudoku);
	
	//Resolvermos el sudoku empezando por la primera posición "0"
	ResolverSudoku(sudoku, salida);
		
	
	salida.close();		//Cerramos el archivo donde se escribe el resultado
	return 0;
	
}


void Leer(int sudoku[]) {
	
	//Abrimos el archivo
	ifstream leer;
	leer.open("sudoku_input.dat");
	
	//Leemos el sudoku
	for(int i=0; i<81; i++) {
		leer >> sudoku[i];
	}
	
	leer.close();
}


void Escribir(int sudoku[], ofstream &salida) {
	
	//Escribimos en el archivo la solución
	for(int i=0; i<9; i++) {
		for(int j=0; j<9; j++) {
			
			salida << sudoku[9*i+j];
			if(j!=8) salida << '\t';		//Separamos por tabuladores menos la última columna
			
		}
		
		salida << '\n';		//Salto de línea entre filas
	}
	
	salida << "\n\n";		//Espaciado para posibles soluciones múltiples
	
}


void ResolverSudoku(int sudoku[], ofstream &salida, int pos) {
	

	//Si la posición corresponde a un dato fijo en el problema y es la última escribimos el resultado
	if(sudoku[pos]!=0&&pos==80) Escribir(sudoku, salida);
	
	//Si la posición corresponde a un dato fijo en el problema y no es la última pasamos a la siguiente posición
	else if (sudoku[pos]!=0) ResolverSudoku(sudoku, salida, pos+1);
	
	//Si no buscamos los posibles números que cumplan las condiciones de solución del sudoku
	else {
		for(int i=1; i<=9; i++) {
			
			sudoku[pos]=i;
			
			if(Comprobar(sudoku, pos)) {				//Si una combinacion es posible
				if(pos==80) Escribir(sudoku, salida);						//y es la última posición escribimos el resultado
				else ResolverSudoku(sudoku, salida, pos+1);					//y no es la última posición pasamos a la siguiente posición
			}
		}
		
		sudoku[pos]=0;		//Cuando retrocedemos en la rama debemos dejarla como estaba antes (si en la posición había un 0 hay que forzar que vuelva a haberlo)
	}
	
}


//Devuelve un 1 si cumple las condiciones y un 0 si no
bool Comprobar(int sudoku[], int pos) {
	
	int fila=pos/9;			//Fila donde se encuentra la posición a comprobar (0-8)
	int columna=pos%9;		//Columna donde se encuentra la posición a comprobar (0-8)
	int pos1_cuadrante=(fila/3)*27+(columna/3)*3;		//Primera posición del cuadrante en el que se encuentra la posición a comprobar
														//(los sudokus tienen 9 cuadrantes en los que no se puede repetir el mismo número)
	
	//Comprobamos la fila
	for(int i=fila*9; i<(fila+1)*9; i++) {
		
		if(pos!=i&&sudoku[pos]==sudoku[i]) return 0;		//El sudoku incumple la condición por filas
	}
	
	
	//Comprobamos la columna
	for(int i=columna; i<81; i=i+9) {
		
		if(pos!=i&&sudoku[pos]==sudoku[i]) return 0;		//El sudoku incumple la condición por columnas
	}
	
	
	//Comprobamos el cuadrante	
	for(int i=pos1_cuadrante; i<=pos1_cuadrante+18; i=i+9) {	//Para movernos por las filas
		
		for(int j=0; j<3; j++) {		//Para movernos por las columnas
			
			if(pos!=(i+j)&&sudoku[pos]==sudoku[i+j]) return 0;		//El sudoku incumple la condición por cuadrantes
		}
	}
	
	
	//Si supera todas las pruebas es solución parcial
	return 1;
}
