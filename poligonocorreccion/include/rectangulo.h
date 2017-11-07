#ifndef RECTANGULO_H
#define RECTANGULO_H
#include "poligono.h"

class rectangulo: public poligono
{
    public:

    rectangulo(){};
    rectangulo(int, int);
    void area(int valArea);
    void print();
};

#endif // RECTANGULO_H
