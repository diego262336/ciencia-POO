#ifndef JUGADOR_H
#define JUGADOR_H
#include <string>
using namespace std;
class Jugador
{
    public:

        string nombre,posicion;
        int numero,agresividad;

        Jugador();
        Jugador(string n,int num, string pos, int ag);



        void set_Nombre(string n);
        void set_Numero(int num);
        void set_Posicion(string pos);
        void set_Agresividad(int ag);
        void ingresar_jugador();
        void print();


};

#endif // JUGADOR_H
