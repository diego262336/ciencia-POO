#include <iostream>
#include <string.h>
#include "Jugador.h"
#include "Equipo.h"

using namespace std;

int main()
{
     Equipo equipo;
     equipo.ingresar_tamanio_equipo();
     equipo.ingresar_jugadores_en_equipo();
     equipo.imprimir_Equipo();
     return 0;
}
