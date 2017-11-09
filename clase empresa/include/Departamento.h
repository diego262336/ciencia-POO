#ifndef DEPARTAMENTO_H
#define DEPARTAMENTO_H
#include <iostream>

using namespace std;

class Departamento
{
    public:
        string logistica="Logistica"; //20%
        string RRHH="RRHH"; //5%
        string almacen="Almacen"; //10%

        void print();
};

#endif // DEPARTAMENTO_H
