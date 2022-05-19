#pragma once
#include <iostream>
#include <mysql.h>
#include "Clientes.h"
#include <string>
#include "Ventas.h"
using namespace std;

void M_clientes();
void crearC();
void borrarC();
void actualizarC();
void leerC();

void menu_clientes();
void menu_empleados();
void menu_ventas();

void empleados_crear();
void empleados_borrar();
void empleados_actualizar();
void empleados_leer();

void crear_venta();
void leer_venta();
void actualizar_venta();
void borrar_venta();

void M_empleado();
void Madmin();
void menuUser();


void menuUser() {
    do
    {
        int switch_on = 0;
        cout << "ingresar en modo?" << endl;
        cout << "Administrador (1)" << endl;
        cout << "empleado (2)" << endl;
        cout << "para salir presiona 0" << endl;
        cin >> switch_on;
        switch (switch_on)
        {
        case 1:  Madmin(); break;

        case 2:  M_empleado();  break;


        case 0: exit(-1);

        default: cout << "error ingresa un caracter valido!!!!" << endl;
            break;
        }


    } while (1 == 1);

}



void Madmin() {
    do
    {
        int switch_on = 0;
        cout << "administrar empleados (1)" << endl;
        cout << "administrar productos (2)"<< endl;
        cout << "administra proveedores (3)" << endl;
        cout << "comprar a proveedores (4)" << endl;
        cout << "mostrar opciones de empleados (4)" << endl;
        cout << "para salir presiona 0" << endl;
        cin >> switch_on;
        switch (switch_on)
        {
        case 1: system("cls"); menu_empleados(); break;

        case 2:  break;


        case 0: exit(-1);

        default: cout << "error ingresa un caracter valido!!!!" << endl;
            break;
        }


    } while (1 == 1);
}


void M_empleado() {
    do
    {
        int switch_on = 0;
        cout << "ventas (1)" << endl;
        cout << "gestionar productos (2)" << endl;
        cout << "registra clientes (3)" << endl;
        cout << "para salir presiona 0" << endl;
        cin >> switch_on;
        switch (switch_on)
        {
        case 3: menu_clientes(); break;


        case 0: exit(-1);

        default: cout << "error ingresa un caracter valido!!!!" << endl;
            break;
        }


    } while (1 == 1);




}












void M_clientes() {
    do
    {
        int switch_on = 0;
        cout << "para agregar cliente ingrese 1" << endl;
        cout << "para agregar empleado ingrese 2" << endl;
        cout << "para hacer una venta ingrese 3" << endl;
        cout << "para salir presiona 0" << endl;
        cin >> switch_on;
        switch (switch_on)
        {
        case 1: menu_clientes(); break;

        case 2: menu_empleados(); break;

        case 3: menu_ventas(); break;

        case 0: exit(-1);

        default: cout << "error ingresa un caracter valido!!!!" << endl;
            break;
        }


    } while (1 == 1);

}


void menu_clientes() {
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
        case 1: crearC(); break;

        case 2: leerC(); break;

        case 3: actualizarC(); break;

        case 4: borrarC(); break;

        case 0: exit(-1);

        default: cout << "error ingresa un caracter valido!!!!" << endl;
            break;
        }


    } while (1 == 1);


}


void menu_empleados() {
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
        case 1: empleados_crear(); break;

        case 2: empleados_leer(); break;

        case 3: empleados_actualizar(); break;

        case 4: empleados_borrar(); break;

        case 0: exit(-1);

        default: cout << "error ingresa un caracter valido!!!!" << endl;
            break;
        }


    } while (1 == 1);




}




void menu_ventas() {
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
        case 1: crear_venta(); break;

        case 2: leer_venta(); break;

        case 3: actualizar_venta(); break;

        case 4: borrar_venta(); break;

        case 0: exit(-1);

        default: cout << "error ingresa un caracter valido!!!!" << endl;
            break;
        }


    } while (1 == 1);



}


void crearC() {
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

    Clientes c = Clientes(nom, ape, nt, gen, dir, tel, ce, fi, v);
    c.crear();
}



void borrarC() {
    string nom, ape, nt, gen, dir, tel, ce, fi, v;
    getline(cin, nom);
    cout << "ingrese id del producto a eliminar: ";
    getline(cin, v);

    Clientes c = Clientes(nom, ape, nt, gen, dir, tel, ce, fi, v);
    c.borrar();
}

void actualizarC() {
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

void leerC() {
    string nom, ape, nt, gen, dir, tel, ce, fi, v;
    cout << "--------------TABLA Clientes----------------------------" << endl;
    Clientes c = Clientes(nom, ape, nt, gen, dir, tel, ce, fi, v);
    c.leer();
}
/*************************************************************************************************************************/


void empleados_crear() {
    system("cls");

    string nom, ape, nt, gen, dir, tel, ce, dpi, ge, fn, idpuesto, fi, fin, v;

    getline(cin, nom);
    cout << "ingrese nombre: ";
    getline(cin, nom);
    cout << "ingrese apellido: ";
    getline(cin, ape);
    cout << "ingrese direccion: ";
    getline(cin, dir);
    cout << "ingrese telefono: ";
    getline(cin, tel);
    cout << "ingrese DPI: ";
    getline(cin, dpi);
    cout << "ingrese genero: ";
    getline(cin, ge);
    cout << "ingrese fecha nacimiento: ";
    getline(cin, fn);
    cout << "ingrese idpuesto: ";
    getline(cin, idpuesto);
    cout << "ingrese fecha inicio: ";
    getline(cin, fi);
    cout << "ingrese fecha ingreso: ";
    getline(cin, fin);



    Empleados a = Empleados(nom, ape, nt, gen, dir, tel, ce, dpi, ge, fn, idpuesto, fi, fin, v);
    a.crear();
}


void empleados_borrar() {
    string nom, ape, nt, gen, dir, tel, ce, dpi, ge, fn, idpuesto, fi, fin, v;
    getline(cin, nom);
    cout << "ingrese id del producto a eliminar: ";
    getline(cin, v);

    Empleados a = Empleados(nom, ape, nt, gen, dir, tel, ce, dpi, ge, fn, idpuesto, fi, fin, v);
    a.borrar();
}


void empleados_actualizar() {
    system("cls");
    string nom, ape, nt, gen, dir, tel, ce, dpi, ge, fn, idpuesto, fi, fin, v;
    getline(cin, v);
    cout << "ingrese id del empleado a actualizar: ";
    getline(cin, v);
    cout << "=================================================" << endl;
    getline(cin, nom);
    cout << "ingrese nombre: ";
    getline(cin, nom);
    cout << "ingrese apellido: ";
    getline(cin, ape);
    cout << "ingrese direccion: ";
    getline(cin, dir);
    cout << "ingrese telefono: ";
    getline(cin, tel);
    cout << "ingrese DPI: ";
    getline(cin, dpi);
    cout << "ingrese genero: ";
    getline(cin, ge);
    cout << "ingrese fecha nacimiento: ";
    getline(cin, fn);
    cout << "ingrese idpuesto: ";
    getline(cin, idpuesto);
    cout << "ingrese fecha inicio: ";
    getline(cin, fi);
    cout << "ingrese fecha ingreso: ";
    getline(cin, fin);

    Empleados a = Empleados(nom, ape, nt, gen, dir, tel, ce, dpi, ge, fn, idpuesto, fi, fin, v);
    a.actualizar();

}

void empleados_leer() {
    string nom, ape, nt, gen, dir, tel, ce, dpi, ge, fn, idpuesto, fi, fin, v;
    cout << "--------------TABLA empleados----------------------------" << endl;
    Empleados a = Empleados(nom, ape, nt, gen, dir, tel, ce, dpi, ge, fn, idpuesto, fi, fin, v);
    a.leer();

}



/*-------------------------------------------------------ventas--------------------------------------------------*/

void crear_venta() {

    system("cls");
    string noF, sr, fechaF, idcl, idemp, fechaI, v;
    getline(cin, noF);
    cout << "no de factura: ";
    getline(cin, noF);
    cout << "ingrese serie de las facturas: ";
    getline(cin, sr);
    cout << "fecha de la factura: ";
    getline(cin, fechaF);
    cout << "id del cliente ";
    getline(cin, idcl);
    cout << "id del empleado : ";
    getline(cin, idemp);
    cout << "fecha ingreso: ";
    getline(cin, fechaI);


    Ventas u = Ventas(noF, sr, fechaF, idcl, idemp, fechaI, v);
    u.crear();


}

void leer_venta() {
    string noF, sr, fechaF, idcl, idemp, fechaI, v;
    cout << "--------------TABLA ventas----------------------------" << endl;
    Ventas u = Ventas(noF, sr, fechaF, idcl, idemp, fechaI, v);
    u.leer();

}

void actualizar_venta() {
    system("cls");
    string noF, sr, fechaF, idcl, idemp, fechaI, v;
    getline(cin, noF);
    cout << "no de factura: ";
    getline(cin, noF);
    cout << "ingrese serie de las facturas: ";
    getline(cin, sr);
    cout << "fecha de la factura: ";
    getline(cin, fechaF);
    cout << "id del cliente ";
    getline(cin, idcl);
    cout << "id del empleado : ";
    getline(cin, idemp);
    cout << "fecha ingreso: ";
    getline(cin, fechaI);

    Ventas u = Ventas(noF, sr, fechaF, idcl, idemp, fechaI, v);
    u.actualizar();

}


void borrar_venta() {
    string noF, sr, fechaF, idcl, idemp, fechaI, v;
    getline(cin, v);
    cout << "ingrese id de la venta a eliminar: ";
    getline(cin, v);

    Ventas u = Ventas(noF, sr, fechaF, idcl, idemp, fechaI, v);
    u.borrar();



}