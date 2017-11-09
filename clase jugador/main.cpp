#include <iostream>
#include "Jugador.h"
#include "Equipo.h"
using namespace std;

int main()
{
    int x;
    cout<<"Ingrese el numero de equipos que desea crear: ";cin>>x;
    for(int y=0;y<x;y++){
        cout<<"-------------------INGRESE AL EQUIPO "<<y+1<<"-------------------"<<endl;
        Equipo equipo;
        equipo.ingresar_tamanio_equipo();
        equipo.ingresar_jugadores_en_equipo();
        cout<<"-------------------EL EQUIPO "<<y+1<<" ES-------------------"<<endl;
        equipo.imprimir_Equipo();
    }
    return 0;
}
