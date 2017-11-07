#ifndef POLIGONO_H
#define POLIGONO_H


class poligono
{
    public:
        int altura;
        int largo;

        poligono();
        poligono(int ,int);
        //virtual ~poligono();
        virtual void area(int n);
        virtual void print();

};

#endif // POLIGONO_H
