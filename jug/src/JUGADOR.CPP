#include "Jugador.h"
#include <iostream>
#include <string>
using namespace std;
Jugador::Jugador()
{
    string nombre="";
    int numero=0;
    string posicion="";
    int agresividad=0;
}

Jugador::Jugador(string n,int num, string pos, int ag)
{
    nombre=n;
    numero=num;
    posicion=pos;
    agresividad=ag;
}

void Jugador::set_Nombre(string n)
{
    nombre=n;
}

void Jugador::set_Numero(int num)
{
    numero=num;
}

void Jugador::set_Posicion(string pos)
{
    posicion=pos;
}

void Jugador::set_Agresividad(int ag)
{
    agresividad=ag;
}

void Jugador::ingresar_jugador()
{
    string nombre,posicion;
    int numero,agresividad;
    cout<<"Ingrese el nombre del jugador"<<endl;
    cin >> nombre;
    cout<<"Ingrese el numero del jugador: "<<endl;
    cin >> numero;
    cout<<"Ingrese la posicion del jugador: "<<endl;
    cin >> posicion;
    cout<<"Ingrese la agresividad del jugador: "<<endl;
    cin >> agresividad;
    cout<<""<<endl;
}

void Jugador::print()
{
    cout<<"NOMBRE: "<<nombre<<endl;
    cout<<"POSICION: "<<posicion<<endl;
    cout<<"NUMERO: "<<numero<<endl;
    cout<<"AGRESIVIDAD: ";
    if (agresividad>5){
        cout<<"muy agresivo cambialo";

    }else
        cout<<"dejalo jugar!"<<endl;
    //cout<<"AGRESIVIDAD: "<<agresividad<<endl;

}
