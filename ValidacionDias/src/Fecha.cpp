#include "Fecha.h"
#include <iostream>

const int A_MIN = 1000;
const int A_MAX = 9999;
const int dias[]={31,28,31,30,31,30,31,31,30,31,30,31};
const int diasb[]={31,29,31,30,31,30,31,31,30,31,30,31};

using namespace std;

Fecha::Fecha(int _d,int _m,int _a)
{
    d=_d;
    m=_m;
    a=_a;
}
bool Fecha::ValidarFecha()
{
	bool res=false;
	if(a>=A_MIN && a<=A_MAX && m>=1 && m<=12 && d>0 )
	{
    	if(IsBisiesto()){
        	if(d<=diasb[m-1])
            	res=true;
    	}
    	else
        	if(d<=dias[m-1])
            	res=true;
	}
	return res;
}
bool Fecha::IsBisiesto()
{
	if(a%4==0 && (a%100!=0 || a%400==0)){
    	return true;
	}
	return false;
}
void Fecha::adicionar_dias(int numDiasAsumar)
{
    int d, m, a;
    int numDias;


}
void Fecha::print()
{
    if(ValidarFecha()==false )
    {
        cout<<"fecha incorrecta"<<endl;
    }
    else{
        cout<<"fecha correcta"<<endl;
        if(IsBisiesto()==true ){
            cout<<"es bisiesto"<<endl;
        }else
            cout<<"no es bisiseto"<<endl;
    }
}
