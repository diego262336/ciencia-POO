#ifndef FECHA_H
#define FECHA_H

#include <iostream>

using namespace std;

class Fecha
{
public:
    int dia;
    int mes;
    int anio;

    int e=31;
    int f=28;
    int m=31;
    int a=30;
    int ma=31;
    int j=30;
    int ju=31;
    int ag=31;
    int s=30;
    int o=31;
    int n=30;
    int d=31;
    int arr[13]={0,e,f,m,a,ma,j,ju,ag,s,o,n,d};

    bool aux=false;

    Fecha():dia(0),mes(0),anio(0){}
    Fecha(int a,int b,int c):dia(a),mes(b),anio(c){}
    void verificar_dias();
    void ingrese_fecha();
    void imprima_fecha();
};

#endif // FECHA_H
