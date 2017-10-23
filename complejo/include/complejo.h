#ifndef COMPLEJO_H
#define COMPLEJO_H

#include <iostream>
using namespace std;
class complejo
{
 private:
     double real;
     double imag;
 public:
     complejo();
     complejo(double, double im=0.0);
     void SetData(void);
     void SetReal(double);
     void SetImag(double);
     //double GetReal(void){return real;}
    // double GetImag(void){return imag;}
     complejo Suma(complejo c);
     complejo Resta(complejo c);
     complejo Multiplica(complejo c);
     complejo Cociente(complejo c);
     void print(){ cout << "("<< real <<","<< imag<<"i)"<<endl; }
};
#endif // COMPLEJO_H
