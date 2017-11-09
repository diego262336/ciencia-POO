#include <iostream>
#include "Empleado.h"
#include "Empresa.h"

using namespace std;

int main()
{
    Empresa e;
    e.ingresar_empresa();
    e.set_Empresa();
    cout<<"-------------------LA EMPRESA ES-------------------"<<endl;
    e.imprimir_empresa();
    e.imprimir_empleados();
    return 0;
}
