#include <iostream>
#include "complejo.h"

using namespace std;
int main()
{
    complejo c1(2.0, 3.0);
    complejo c2(2.0, 2.0);
    //complejo c3;
    //c3.SetData();
    complejo suma = c1.Suma(c2);
    complejo resta = c1.Resta(c2);
    complejo producto = c1.Multiplica(c2);
    complejo cociente = c1.Cociente(c2);
    cout << "Suma: " ; suma.print();
    cout << "Resta: " ; resta.print();
    cout << "Producto: " ; producto.print();
    cout << "Cociente: " ; cociente.print();
    cout << endl;
    return 0;
}
