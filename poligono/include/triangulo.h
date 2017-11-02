#ifndef TRIANGULO_H
#define TRIANGULO_H
#include "poligono.h"

class triangulo: public poligono
{
public:

    triangulo(){};
    triangulo(int,int);
    void area(int _area);
    void print();

};

#endif // TRIANGULO_H
