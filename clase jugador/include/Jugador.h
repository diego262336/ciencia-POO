#ifndef JUGADOR_H
#define JUGADOR_H
#include <string>
#include <iostream>

using namespace std;

class Jugador
{
    public:
        int numero,agresividad;
        string nombre,posicion;
        Jugador();
        void set_jugador(string n,int num, string pos, int ag);
        void set_Nombre(string n);
        void set_Numero(int num);
        void set_Posicion(string pos);
        void set_Agresividad(int ag);
        void ingresar_jugador();
        void imprimir();
};

#endif // JUGADOR_H
