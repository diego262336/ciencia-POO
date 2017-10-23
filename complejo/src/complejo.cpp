#include "complejo.h"
#include<iostream>
using namespace std;

complejo::complejo()
{
    real = 0.0; imag = 0.0;
}
complejo::complejo(double re,double im)
{
    real = re; imag = im;
}
void complejo::SetData(void)
{
    cout << "Parte real: ";
    cin >> real;
    cout << "Parte imaginaria: ";
    cin >> imag;
}
void complejo::SetReal(double re)
{
    real = re;
}
void complejo::SetImag(double im)
{
    imag = im;
}
complejo complejo::Suma(complejo c)
{
    complejo cs;
    cs.real = real + c.real;
    cs.imag = imag + c.imag;
    return cs;
}
complejo complejo::Resta(complejo c)
{
    complejo cr;
    cr.real = real - c.real;
    cr.imag = imag - c.imag;
    return cr;
}
complejo complejo::Multiplica(complejo c)
{
    complejo cm;
    cm.real = (real * c.real)-(imag * c.imag );
    cm.imag = (real * c.imag)-(c.real * imag);
    return cm;
}
complejo complejo::Cociente(complejo c)
{
    complejo cc;
// (a,b)/(c,d) = ((ac+bd)/(c^2+d^2) , (bc-ad)/(c^2 + d^2 ))
    cc.real= ((real * c.real)+(imag * c.imag ))/(c.real*c.real + c.imag*c.imag);
    cc.imag= ((imag * c.real)-(real * c.imag ))/(c.real*c.real + c.imag*c.imag);
    return cc;
}
