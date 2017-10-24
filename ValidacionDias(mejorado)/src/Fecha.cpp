#include "Fecha.h"
#include <iostream>
using namespace std;

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
    if(ValidarFecha()==true )
    {
        if(IsBisiesto()==true ){
            //cout<<"es bisiesto"<<endl;
            if(d<=diasb[m-1])
                d=d+numDiasAsumar;
                if(d>diasb[m-1])
                {
                    d=d-diasb[m-1];
                    m++;
                }
        }else{
            //cout<<"no es bisiseto"<<endl;
            if(d<=diasb[m-1])
                d=d+numDiasAsumar;
                if(d>dias[m-1])
                {
                    d=d-dias[m-1];
                    m++;
                }
        }
        cout<<"FECHA MODIFICADA : "<<d<<" / "<<m<<" / "<<a<<" "<<endl<<endl;
    }
}
void Fecha::print()
{
    if(ValidarFecha()==false )
    {
        cout<<"fecha incorrecta"<<endl;
    }
    else{

        cout<<"FECHA ACTUAL : "<<d<<" / "<<m<<" / "<<a<<" "<<endl;
        cout<<"fecha correcta"<<endl;
        if(IsBisiesto()==true ){
            cout<<"es bisiesto"<<endl;
        }else
            cout<<"no es bisiseto"<<endl;
    }
}
