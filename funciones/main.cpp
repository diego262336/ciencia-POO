#include <iostream>

using namespace std;


int enesimoprimo(int n)
{

    int i=3, contador=1,f;
    while(contador<n){
        f=0;
        for(int j=2;j<=i/2;j++)
            if(i%j==0)
            {
                f=1;
            }
        if(f==0)
        {
            contador++;
        }
        i++;
    }

    return i-1;
}
int main()
{
    int nm;
    cout<<"ingrese un numero :"<<endl;
    cin>>nm;
    enesimoprimo(nm);



}


bool esPrimo(int num)
{
    int x=0;
    for(int i=1;i<(num+1);i++){
        if(num%i==0){
            x++;
        }
    }
    if(x!=2){
        return true;
    }else
        return false;
}
int main()
{
    int n;
    cout<<"ingrese un numero: ";
    cin>>n;
    if(esPrimo(n))
        cout<<"no es primo"<<endl;
    else
        cout<<"si es primo";
}



bool isBisiesto(int a)
{

    if(a % 4 == 0 && (a % 100 != 0 || a % 400 == 0)){
         return true;
     }else{
         return false;
     }
}
int main()
{
    int bis;
    cout<<"ingresa anio: ";
    cin>>bis;
    if(isBisiesto(bis))
        cout<<"es bisiesto";
    else
        cout<<"no es bisiesto";
}


