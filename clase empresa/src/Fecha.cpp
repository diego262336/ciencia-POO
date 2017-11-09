#include "Fecha.h"

void Fecha::verificar_dias()
{
    if(aux==true)
        f=29;
    while(mes>12)
    {
        anio++;
        mes=mes-12;
    }
    int x=1;
    while(x>0)
    {
        if(mes==x)
        {
            if(dia>arr[x])
            {
                mes++;
                dia=dia-arr[x];
            }
            if(dia<arr[x])
                break;
        }
        if(x==12)
            x=1;
        x++;
    }
    while(mes>12)
    {
        anio++;
        mes=mes-12;
    }
}

void Fecha::ingrese_fecha()
{
    cout<<"Ingresa el año: ";cin>>anio;
    if((anio%4==0)&&((anio%100!=0)||(anio%400==0)))
    {
        cout<<"El año es bisiesto..."<<endl;
        aux=true;
    }
    cout<<"Ingresar el mes: ";cin>>mes;
    cout<<"Ingresar el dia: ";cin>>dia;
    verificar_dias();
}

void Fecha::imprima_fecha()
{
    cout<<dia<<"/"<<mes<<"/"<<anio<<endl;
}
