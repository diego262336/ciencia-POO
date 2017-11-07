#include <iostream>
#include "poligono.h"
#include "triangulo.h"
#include "rectangulo.h"
#include "cuadrado.h"
#include "ArrayPoligono.h"
#include <iostream>
using namespace std;

int main()
{
    triangulo t1(5,6);
    t1.print();
    cuadrado c1(5,5);
    c1.print();
    rectangulo r1(4,8);
    r1.print();

    ArrayPoligono poligonos(2);

    poligonos.arr[0] = ;
    poligonos.arr[1] = ;

    cout << poligonos.arr[0] << endl;


    //cout << "Hello world!" << endl;
    return 0;




}
