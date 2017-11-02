#include <iostream>
#include "poligono.h"
#include "triangulo.h"
#include "rectangulo.h"
#include "cuadrado.h"
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

    //cout << "Hello world!" << endl;
    return 0;
}
