#ifndef EMPRESA_H
#define EMPRESA_H
#include <string>
#include "Empleado.h"
#include "Fecha.h"
#include "Departamento.h"

using namespace std;

class Empresa
{
    public:
        string nombre_empresa;
        int RUC;
        int tam;
        Empleado empresa[100];
        Departamento dep;

        Empresa();
        void ingresar_empresa();
        void set_Nombre_empresa();
        bool comparar(string s1,string s2);
        void set_Empresa();
        void imprimir_empresa();
        void imprimir_empleados();
};

#endif // EMPRESA_H
