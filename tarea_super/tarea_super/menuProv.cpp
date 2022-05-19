#include <iostream>
#include <mysql.h>
#include "productos.h"
#include "marcas.h"
#include <string>
using namespace std;

void M_producto();
void crearPro();
void leerPro();
void actualizarPro();
void borrarPro();

void M_marca();
void crearmarca();
void leermarca();
void actualizarmarca();
void borrarmarca();


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
	do
	{
		cout << "xxx Bienvenido a mi menu xxxx" << endl;
		cout << "1. Productos" << endl;
		cout << "2. marcas " << endl;
		cout << "3. SALIR " << endl;
		int opcion;
		cin >> opcion;
		switch (opcion) {
		case 1:
			system("cls");
			M_producto();
			break;

		case 2:
			system("cls");
			M_marca();
			break;

		case 0: exit(-1);

		}

	} while (1 == 1);

}

void M_producto() {
	do
	{
		int switch_on = 0;
		cout << "Si desea agregar un Producto presione 1 : " << endl;
		cout << "Si desea ver los productos ingresados presione 2 : " << endl;
		cout << "Si de sea actulaizar los productos ingresados presione 3 : " << endl;
		cout << "Si de sea borrar un producto presione 4 : " << endl;
		cout << "Si desea salir presione 0" << endl;
		cin >> switch_on;
		switch (switch_on)
		{
		case 1: crearpro(); break;

		case 2: leerpro(); break;

		case 3: actualizarpro(); break;


		case 4: borrarpro(); break;


		case 0: exit(-1);

		default: cout << "ERROR! NUMERO INVALIDO, POR FAVOR INGRESE OTRO. " << endl;
			break;
		}


	} while (1 == 1);

}

void crearpro() {
	system("cls");
	string producto, idMarca, Descripcion, Imagen, precio_costo, precio_venta, existencia, fecha_ingreso, var;
	getline(cin, producto);
	cout << "Ingrese el producto: " << endl;
	getline(cin, producto);
	cout << "Ingrese el Id de la marca del producto : " << endl;
	getline(cin, idMarca);
	cout << "Ingrese la Descripcion del producto: " << endl;
	getline(cin, Descripcion);
	cout << "Ingrese la imagen del producto: " << endl;
	getline(cin, Imagen);
	cout << "Ingrese el precio de costo del producto: " << endl;
	getline(cin, precio_costo);
	cout << "Ingrese el precio de venta del producto: " << endl;
	getline(cin, precio_venta);
	cout << "Ingrese la existencia del producto: " << endl;
	getline(cin, existencia);
	cout << "Ingrese la fecha que ingreso el producto: " << endl;
	getline(cin, fecha_ingreso);


	producto p = producto(producto, idMarca, Descripcion, Imagen, precio_costo, precio_costo, existencia, fecha_ingreso, var);
	p.crear();
	p.leer();

}

void leerpro() {
	system("cls");
	string producto, idMarca, Descripcion, Imagen, precio_costo, precio_costo, existencia, fecha_ingreso, var;
	cout << "***LISTA DE PRODUCTOS INGRESADOS****" << endl;
	cout << "----------------------------------------" << endl;

	producto p = producto(producto, idMarca, Descripcion, Imagen, precio_costo, precio_costo, existencia, fecha_ingreso, var);
	p.leer();
}

void actualizarpro() {
	system("cls");
	string producto, idMarca, Descripcion, Imagen, precio_costo, precio_venta, existencia, fecha_ingreso, var;
	getline(cin, var);
	cout << "Ingrese el Id del producto a actualizar: " << endl;
	getline(cin, var);
	cout << " **" << endl;
	getline(cin, producto);
	cout << "Ingrese el producto: " << endl;
	getline(cin, producto);
	cout << "Ingrese el Id de la marca del producto : " << endl;
	getline(cin, idMarca);
	cout << "Ingrese la Descripcion del producto: " << endl;
	getline(cin, Descripcion);
	cout << "Ingrese la imagen del producto: " << endl;
	getline(cin, Imagen);
	cout << "Ingrese el precio de costo del producto: " << endl;
	getline(cin, precio_costo);
	cout << "Ingrese el precio de venta del producto: " << endl;
	getline(cin, precio_venta);
	cout << "Ingrese la existencia del producto: " << endl;
	getline(cin, existencia);
	cout << "Ingrese la fecha que ingreso el producto: " << endl;
	getline(cin, fecha_ingreso);

	producto p = producto(producto, idMarca, Descripcion, Imagen, precio_costo, precio_costo, existencia, fecha_ingreso, var);
	p.actualizar();
	p.leer();

}


void borrarpro() {
	system("cls");
	string producto, idMarca, Descripcion, Imagen, precio_costo, precio_venta, existencia, fecha_ingreso, var;
	getline(cin, var);
	cout << "Ingrese el Id del producto que desea eliminar: " << endl;
	getline(cin, var);

	producto p = producto(producto, idMarca, Descripcion, Imagen, precio_costo, precio_costo, existencia, fecha_ingreso, var);
	p.borrar();
	p.leer();

}

void M_marca() {
	do
	{
		int switch_on = 0;
		cout << "Si desea agregar una Marca presione 1 : " << endl;
		cout << "Si desea ver las marcas ingresadas presione 2 : " << endl;
		cout << "Si de sea actulaizar las marcas ingresadas presione 3 : " << endl;
		cout << "Si de sea borrar una marca presione 4 : " << endl;
		cout << "Si desea salir presione 0" << endl;
		cin >> switch_on;
		switch (switch_on)
		{
		case 1: crearmarca(); break;

		case 2: leermarca(); break;

		case 3: actualizarmarca(); break;


		case 4: borrarmarca(); break;


		case 0: exit(-1);

		default: cout << "ERROR! NUMERO INVALIDO, POR FAVOR INGRESE OTRO. " << endl;
			break;
		}


	} while (1 == 1);

}

void crearmarca() {
	system("cls");
	string marca, var;
	getline(cin, marca);
	cout << "Ingrese la marca: " << endl;
	getline(cin, marca);

	marca m = marca(marca, var);
	m.crear();
	m.leer();

}

void leermarca() {
	system("cls");
	string marca, var;
	cout << "***LISTA DE MARCAS INGRESADAS****" << endl;
	cout << "----------------------------------------" << endl;

	marca m = marca(marca, var);
	m.leer();
}

void actualizarmarca() {
	system("cls");
	string marca, var;
	getline(cin, var);
	cout << "Ingrese el Id de la marca a actualizar: " << endl;
	getline(cin, var);
	cout << " **" << endl;
	getline(cin, marca);
	cout << "Ingrese la marca: " << endl;
	getline(cin, marca);

	marca m = marca(marca, var);

	m.actualizar();
	m.leer();

}


void borrarmarca() {
	system("cls");
	string marca, var;
	getline(cin, var);
	cout << "Ingrese el Id de la marca que desea eliminar: " << endl;
	getline(cin, var);

	marca m = marca(marca, var);
	m.borrar();
	m.leer();

}