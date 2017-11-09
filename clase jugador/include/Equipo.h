#ifndef EQUIPO_H
#define EQUIPO_H
#include "Jugador.h"
#include <iostream>
using namespace std;

class Equipo
{
    public:
        Jugador *equipo = new Jugador[tam];
        int tam;
        void ingresar_tamanio_equipo();
        void ingresar_jugadores_en_equipo();
        void imprimir_Equipo();
        ~Equipo();
};

#endif // EQUIPO_H
