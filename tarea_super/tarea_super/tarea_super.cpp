// tarea_super.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <mysql.h>
#include "Clientes.h"
#include <string>
using namespace std;

void M_clientes();
void crearPro();
void borrarPro();
void actualizarPro();
void leerPro();

int main(){
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
    return 0;*/
    


    M_clientes();
}

void M_clientes() {
    do
    {
        int switch_on = 0;
        cout << "para agregar contenido ingresa 1" << endl;
        cout << "para leer la tabla ingresa 2" << endl;
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
    string nit;
    string nom, ape, nt, gen, dir, tel, ce, fi, v;
    getline(cin, nom);
    cout << "ingrese nombre: ";
    getline(cin, nom);
    cout << "ingrese apellido: ";
    getline(cin, ape);
    cout << "ingrese nit: ";
    getline(cin, nt);
    cout << "ingrese correo electronico: ";
    getline(cin, ce);
    cout << "ingrese telefono: ";
    getline(cin, tel);
    cout << "ingrese genero: ";
    getline(cin, gen);
    cout << "ingrese fecha ingreso: ";
    getline(cin, fi);



 
    Nit r = Nit(nt);
    r.verificanit();

    Clientes c = Clientes(nom, ape, nt, gen, dir, tel, ce, fi,v);
    c.crear();
}



void borrarPro() {
    string nom, ape, nt, gen, dir, tel, ce, fi, v;
    getline(cin, nom);
    cout << "ingrese id del producto a eliminar: ";
    getline(cin, v);

    Clientes c = Clientes(nom, ape, nt, gen, dir, tel, ce, fi, v);
    c.borrar();
}

void actualizarPro() {
    system("cls");
    string nom, ape, nt, gen, dir, tel, ce, fi, v;
    getline(cin, v);
    cout << "ingrese id del carne a actualizar: ";
    getline(cin, v);
    cout << "=================================================" << endl;
    getline(cin, nom);
    cout << "ingrese nombre: ";
    getline(cin, nom);
    cout << "ingrese apellido: ";
    getline(cin, ape);
    cout << "ingrese nit: ";
    getline(cin, nt);
    cout << "ingrese correo electronico: ";
    getline(cin, ce);
    cout << "ingrese telefono: ";
    getline(cin, tel);
    cout << "ingrese genero: ";
    getline(cin, gen);
    cout << "ingrese fecha ingreso: ";
    getline(cin, fi);

    Clientes c = Clientes(nom, ape, nt, gen, dir, tel, ce, fi, v);
    c.actualizar();

}

void leerPro() {
    string nom, ape, nt, gen, dir, tel, ce, fi, v;
    cout << "--------------TABLA Clientes----------------------------" << endl;
    Clientes c = Clientes(nom, ape, nt, gen, dir, tel, ce, fi, v);
    c.leer();
}
