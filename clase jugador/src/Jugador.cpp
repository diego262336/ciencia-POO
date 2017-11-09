#include "Jugador.h"

Jugador::Jugador()
{
    nombre="";
    numero=0;
    posicion="";
    agresividad=0;
}

void Jugador::set_jugador(string n,int num, string pos, int ag)
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

void Jugador::imprimir()
{
    cout<<"El nombre del jugador es: "<<nombre<<endl;
    cout<<"Su numero es: "<<numero<<endl;
    cout<<"La posicion del jugador es: "<<posicion<<endl;
    cout<<"La agresividad es: "<<agresividad<<endl;
    if(agresividad>5)
        cout<<"Tiene riesgo que le saquen tarjetas"<<endl;
    else
        cout<<"No tiene riesgo que le saquen tarjetas"<<endl;
}
