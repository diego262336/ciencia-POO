#ifndef EMPLEADO_H
#define EMPLEADO_H
#include <string>
#include <iostream>
#include "Fecha.h"
#include "Departamento.h"

using namespace std;

class Empleado
{
    public:
        string nombre,departamento;
        double salario;
        Fecha fecha;
        Departamento imprime();

        Empleado();
        Empleado(string nom,double sal,string dep);
        void set_Nombre(string nom);
        void set_Salario(double sal);
        void set_Departamento(string dep);
        void set_empleado();
        void imprimir();
};

#endif // EMPLEADO_H
