#include "triangulo.h"
#include "poligono.h"
#include <iostream>
using namespace std;



triangulo::triangulo(int _altura,int _largo )
{
    altura=_altura;
    largo=_largo;
}

void triangulo::area(int valArea)
{

    valArea=(altura*largo)/2;

}


void triangulo::print()
{

    cout<<"el area del triangulo es: "<<(altura*largo)/2;
    cout<<endl;

}
/*
triangulo::~triangulo()
{
    //dtor
}
*/
