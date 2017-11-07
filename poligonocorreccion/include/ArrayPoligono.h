#ifndef ARRAYPOLIGONO_H
#define ARRAYPOLIGONO_H
#include "poligono.h"
#include <iostream>
using namespace std;

class ArrayPoligono
{
    public:
        int tam;
        poligono **arr;
        ArrayPoligono(int tam)
        {
            this -> tam = tam;
            arr=new poligono* [tam];
        }
        ArrayPoligono(ArrayPoligono &o)
        {
            arr = new poligono*[o.tam];
            tam = o.tam ;
            for (int i = 0; i < tam; ++i)
            arr[i] = o.arr[i];
        }
        ~ArrayPoligono(){
            delete[] arr;
        }

};


#endif // ARRAYPOLIGONO_H
