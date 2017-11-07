#ifndef CUADRADO_H
#define CUADRADO_H
#include "poligono.h"


class cuadrado: public poligono
{

    public:

    cuadrado(){};

    cuadrado(int,int);

    void area(int valArea);
    void print();
};

#endif // CUADRADO_H
