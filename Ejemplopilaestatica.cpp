// Ejemplopilaestatica.cpp : Defines the entry point for the console application.
//  
#include "stdafx.h"
#include <iostream> 
#include "Pila.h"
#include "TipoDato.h"
using namespace std;
int main()
{
	Pila autos;
	TipoDato auto_;
	int opcion;
	do {
		cout << "Menu" << endl;
		cout << "1.Push carro" << endl;
		cout << "2.pop carro" << endl;
		cout << "3.Ver ultimo autos" << endl;
		cout << "4.Limpiar autos" << endl;
		cout << "5.Ver autos" << endl;
		cout << "0.Salir" << endl;
		cout << "Ingrese la opcion: ";
		cin >> opcion;
		switch (opcion) {
			case 1:
				cout << "Ingrese el ID del auto: " << endl;
				cin >> auto_.id;
				cout << "Ingresela descripcion: " << endl;
				cin >> auto_.descripcion;
				autos.Apilar(auto_);
				break;
			case 2: 
				autos.Desapilar();
				break;
			case 3: 
				autos.CimaPila(auto_);
				break;
			case 4: 
				autos.LimpiarPila();
				break;
			case 5: 
				autos.VerPila();
				break;
			case 0: 
				cout << "Saliendo del programa....";
				break;
			default:
				cout << "ERROR";
				break;
		}
	} while (opcion != 0);
	
}

