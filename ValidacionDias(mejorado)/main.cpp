#include <iostream>
#include "Fecha.h"
using namespace std;

int main()
{
    Fecha fecha1(28,2,2016);
    fecha1.print();
    fecha1.adicionar_dias(4);
    //fecha1.print();

    return 0;
}



