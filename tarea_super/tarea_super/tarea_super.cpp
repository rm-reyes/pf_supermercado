// tarea_super.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <mysql.h>
#include "Proveedor.h"
#include <string>
using namespace std;

void M_proveedor();
void crearPro();
void leerPro();
void actualizarPro();
void borrarPro();

int main() {
	/*
	int q_estado;
	ConexionBD cn = ConexionBD();
	cn.abrir_conexion();

	if (cn.getConectar()) {
		cout << "Conexion Exitosa..." << endl;
	}
	else{ cout << "Error en la | Exitosa." << endl;
	}
			system("pause");
	return 0;
	*/


	M_proveedor();
}

void M_proveedor() {
	do
	{
		int switch_on = 0;
		cout << "para agregar un proveedor ingrese 1: " << endl;
		cout << "para leer la tabla ingresa 2: " << endl;
		cout << "para actualizar la tabla ingresa 3" << endl;
		cout << "para borrar de la tabla ingresa 4 " << endl;
		cout << "para salir presiona 0" << endl;
		cin >> switch_on;
		switch (switch_on)
		{
		case 1: crearPro(); break;

		case 2: leerPro(); break;

		case 3: actualizarPro(); break;


		case 4: borrarPro(); break;


		case 0: exit(-1);

		default: cout << "error ingresa un caracter valido!!!!" << endl;
			break;
		}


	} while (1 == 1);

}

void crearPro() {
	system("cls");
	string proveedor, nit, direccion, telefono, var;
	getline(cin, proveedor);
	cout << "ingrese el nombre del proveedor: " << endl;
	getline(cin, proveedor);
	cout << "ingrese el nit del proveedor: " << endl;
	getline(cin, nit);
	cout << "ingrese la direccion del proveedor: " << endl;
	getline(cin, direccion);
	cout << "ingrese el telefono del proveedor: " << endl;
	getline(cin, telefono);

	Proveedor p = Proveedor(proveedor, nit, direccion, telefono, var);
	p.crear();
	p.leer();

}

void leerPro() {
	system("cls");

	string proveedor, nit, direccion, telefono, var;
	cout << "------------TABLA PROVEEDORES-----------" << endl;
	cout << "----------------------------------------" << endl;

	Proveedor p = Proveedor(proveedor, nit, direccion, telefono, var);
	p.leer();
}

void actualizarPro() {
	system("cls");
	string proveedor, nit, direccion, telefono, var;
	getline(cin, var);
	cout << "ingrese el id del proveedor que desea actualizar: " << endl;
	getline(cin, var);
	cout << " ********" << endl;
	getline(cin, proveedor);
	cout << "ingrese el nombre del proveedor: " << endl;
	getline(cin, proveedor);
	cout << "ingrese el nit del proveedor: " << endl;
	getline(cin, nit);
	cout << "ingrese la direccion del proveedor: " << endl;
	getline(cin, direccion);
	cout << "ingrese el telefono del proveedor: " << endl;
	getline(cin, telefono);

	Proveedor p = Proveedor(proveedor, nit, direccion, telefono, var);
	p.actualizar();
	p.leer();

}


void borrarPro() {
	system("cls");
	string proveedor, nit, direccion, telefono, var;
	getline(cin, proveedor);
	cout << "ingrese el id del proveedor que desea borrar: " << endl;
	getline(cin, var);

	Proveedor p = Proveedor(proveedor, nit, direccion, telefono, var);
	p.borrar();
	p.leer();

}