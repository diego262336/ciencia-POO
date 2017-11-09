#include "Empresa.h"

Empresa::Empresa()
{
    nombre_empresa="";
    RUC=0;
    tam=0;
}

void Empresa::ingresar_empresa()
{
    cout<<"Ingrese el nombre de la empresa: ";cin>>nombre_empresa;
    cout<<"Ingrese el ruc de la empresa (11 digitos): ";cin>>RUC;
    cout<<"Ingresa el numero de empleados: ";cin>>tam;
    cout<<" "<<endl;
}

bool Empresa::comparar(string s1,string s2)
{
    int cont=0;
    for(int x=0;x<100;x++)
    {
        if((s1[x]=='\0'&&s2[x]!='\0')||(s1[x]!='\0'&&s2[x]=='\0'))
        {
            return false;
        }
        if((s2[x]=='\0')&&(cont==x))
        {
            return true;
        }
        if(s1[x]==s2[x])
        {
            cont++;
            continue;
        }
    }
}

void Empresa::set_Empresa()
{
    for(int x=0;x<tam;x++)
    {
        cout<<"INGRESE EL EMPLEADO NO"<<x+1<<": "<<endl;
        empresa[x].set_empleado();
        cout<<" "<<endl;
        if(comparar(empresa[x].departamento,Departamento.logistica)==true)
        {
            cout<<"El empleado pertenece a Logistica, se le aumenta el sueldo un 20%"<<endl;
            empresa[x].salario=empresa[x].salario+((20*empresa[x].salario)/100);
        }
        if(comparar(empresa[x].departamento,Departamento.RRHH)==true)
        {
            cout<<"El empleado pertenece a RRHH, se le aumenta el sueldo un 5%"<<endl;
            empresa[x].salario=empresa[x].salario+((5*empresa[x].salario)/100);
        }
        if(comparar(empresa[x].departamento,Departamento.almacen)==true)
        {
            cout<<"El empleado pertenece a Almacen, se le aumenta el sueldo un 10%"<<endl;
            empresa[x].salario=empresa[x].salario+((10*empresa[x].salario)/100);
        }
        cout<<" "<<endl;
    }
}

void Empresa::imprimir_empresa()
{
    cout<<"El nombre de la empresa es: "<<nombre_empresa<<endl;
    cout<<"El ruc de la empresa es: "<<RUC<<endl;
    cout<<" "<<endl;
}

void Empresa::imprimir_empleados()
{
    for(int x=0;x<tam;x++)
    {
        cout<<"EL EMPLEADO NO"<<x+1<<" ES: "<<endl;
        empresa[x].imprimir();
        cout<<" "<<endl;
    }
}
