#include "cuadrado.h"
#include <iostream>
using namespace std;


cuadrado::cuadrado(int _altura,int _largo )
{
    altura=_altura;
    largo=_largo;
}

void cuadrado::area(int valArea)
{

    valArea=largo*largo;

}


void cuadrado::print()
{

    cout<<"el area del cuadrado es: "<<largo*largo;
    cout<<endl;

}
