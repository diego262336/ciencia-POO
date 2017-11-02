#include "rectangulo.h"
#include <iostream>
using namespace std;

rectangulo::rectangulo(int _altura,int _largo )
{
    altura=_altura;
    largo=_largo;
}

void rectangulo::area(int valArea)
{

    valArea=altura*largo;

}


void rectangulo::print()
{

    cout<<"el area del rectangulo es: "<<altura*largo;
    cout<<endl;

}
