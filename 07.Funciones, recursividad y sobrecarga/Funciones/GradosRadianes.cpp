//El programa transforma un ángulo de grados a radianes y viceversa

#include <iostream>
#include <cmath>

double RadianesGrados(double);
double GradosRadianes(double);
double Rango360(double);
double Rango2Pi(double);

const double pi=3.141592653589793;

using namespace std;

int main () {
	
	double AnguloRadianes;
	double AnguloGrados;
	int elec;		//variable para elegir la opción
	
	
	//Sacamos un menú para elegir por pantalla
	cout << "Elige una opción de las siguientes:" << endl;
	cout << "1.Convertir de radianes a grados" << endl;
	cout << "2.Convertir de grados a radianes" << endl;
	cin >> elec;
	
	
	//Si la elección es incorrecta
	while(elec!=1 && elec!=2) {
		cout << "Elección incorrecta, introduce 1 o 2:" << endl;
		cout << "1.Convertir de radianes a grados" << endl;
		cout << "2.Convertir de grados a radianes" << endl;
		cin >> elec;
	}
	
	
	//Si la elección es correcta ejecutamos el código correspondiente
	if (elec==1) {
		//Pedimos el valor del ángulo
		cout << "Introduce el valor del ángulo en radianes: ";
		cin >> AnguloRadianes;
		
		//Sacamos el resultado por pantalla
		cout << "El ángulo en grados es " << RadianesGrados(AnguloRadianes) << endl;
		cout << "El ángulo equivalente en el intervalo [0, 360) es " << Rango360(RadianesGrados(AnguloRadianes)) << endl;
	}
	else if (elec==2) {
		//Pedimos el valor del ángulo
		cout << "Introduce el valor del ángulo en grados: ";
		cin >> AnguloGrados;
		
		//Sacamos el resultado por pantalla
		cout << "El ángulo en radianes es " << GradosRadianes(AnguloGrados) << endl;
		cout << "El ángulo equivalente en el intervalo [0, 2*Pi) es " << Rango2Pi(GradosRadianes(AnguloGrados)) << endl;
	}
	
	
	return 0;
	
}

/***********Definimos las funciones para transformar de grados a radianes y viceversa*************/
double RadianesGrados(double x) {
	return x*180.0/pi;
}

double GradosRadianes(double x) {
	return x/180.0*pi;
}

/****************Creamos funciones para que el angulo esté comprendido en una circunferencia************/
double Rango360(double x) {

	while(x>=360.0) {
		x=x-360.0;
	}
	
	while(x<0) {
		x=x+360.0;
	}

	return x;
}

double Rango2Pi(double x) {
	double pi2=2.0*pi;
	
	while(x>=pi2) {
		x=x-pi2;
	}
	
	while(x<0) {
		x=x+pi2;
	}
	
	return x;
}
