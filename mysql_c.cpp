#include <iostream>
#include <mysql.h>
#include "Cliente.h"

using namespace std;
/*int q_estado;*/

int main(){

    /*MYSQL* conectar;
    MYSQL_ROW fila;
    MYSQL_RES* resultado;
    conectar = mysql_init(0);
    conectar = mysql_real_connect(conectar, "localhost", "cn_empresa", "avsa2020", "db_empresa", 3306, NULL, 0);
    if (conectar) {
        //cout << "Conexion Exitosa..." << endl;

        string puesto;
        cout << "Ingrese Puesto: "; cin >> puesto;
        string insert = "insert into puestos(puesto) values('" + puesto + "')";
        const char* i = insert.c_str();
        q_estado = mysql_query(conectar,i);
        if (!q_estado) {
            cout << "Ingreso Exitoso..." << endl;
        }
        else {
            cout << "xxx Error al Ingresar xxx" << endl;
        }

        string consulta = "Select * from puestos";
        const char* c = consulta.c_str();
        q_estado = mysql_query(conectar, c);
        if (!q_estado){
            resultado = mysql_store_result(conectar);
            while (fila = mysql_fetch_row(resultado) ){
                cout << fila[0] << ". " << fila[1] << endl;
            }
        }
        else {
            cout << "xxx Error al Consultar xxx" << endl;
        }

    }
    else {
        cout << "Error en la Conexion.." << endl;
    }*/

    string nit, nombre, apellidos, direccion, fecha_naciemiento;
    int telefono;
    cout << "Ingrese nit: "; getline(cin, nit);
    cout << "Ingrese Nombres: "; getline(cin, nombre);
    cout << "Ingrese Apellidos: "; getline(cin, apellidos);
    cout << "Ingrese Direccion: "; getline(cin, direccion);
    cout << "Ingrese Telefono: "; cin >> telefono; 
    cin.ignore();
    cout << "Ingrese Fecha de Nacimiento: "; cin >> fecha_naciemiento;
  
    Cliente c = Cliente(nombre,apellidos,direccion,telefono,fecha_naciemiento,nit);
    c.crear();
    c.leer();



    system("pause");
    return 0;
}

