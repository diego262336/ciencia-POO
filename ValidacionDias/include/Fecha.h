#ifndef FECHA_H
#define FECHA_H
#include <iostream>
using namespace std;

class Fecha
{
	public:
    	int d,m,a;
    public:
    	Fecha();
    	Fecha(int,int,int);
    	bool ValidarFecha();
    	bool IsBisiesto();
    	void print();
        void adicionar_dias(int);


};

#endif // FECHA_H
