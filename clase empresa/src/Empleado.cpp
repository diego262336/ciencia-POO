#include "Empleado.h"

Empleado::Empleado()
{
    nombre="";
    salario=0;
}

Empleado::Empleado(string nom,double sal,string dep)
{
    nombre=nom;
    salario=sal;
    departamento=dep;
}

void Empleado::set_Nombre(string nom)
{
    nombre=nom;
}

void Empleado::set_Salario(double sal)
{
    salario=sal;
}

void Empleado::set_Departamento(string dep)
{
    departamento=dep;
}

void Empleado::set_empleado()
{
    cout<<"Ingresa el nombre del empleado: ";cin>>nombre;
    cout<<"Ingresa la fecha de ingreso del empleado: "<<endl;
    fecha.ingrese_fecha();
    cout<<"Ingresa el salario del empleado: ";cin>>salario;
    cout<<"Seleccione el departamento..."<<endl;
    imprime().print();
    cout<<"Ingrese el departamento: ";cin>>departamento;
}

void Empleado::imprimir()
{
    cout<<"El nombre del empleado es: "<<nombre<<endl;
    cout<<"El salario del empleado es: "<<salario<<endl;
    cout<<"El departamento del empleado es: "<<departamento<<endl;
    cout<<"La fecha de ingreso fue: "<<salario<<endl;
    fecha.imprima_fecha();
}
