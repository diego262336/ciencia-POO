#include <iostream>

using namespace std;

int main()
{
    float n;
    float suma=0;
    float media;
    float num_men=0;
    float num_may=0;
    cout<<"ingrese la cantidad de numeros: ";cin>>n;
    for(int i=1;i<=n;i++)
    {
        float num;
        //float num_men;
        //float temp=num;
        cout<<"intgrese un numero: ";cin>>num;
        suma=suma+num;
        if(i>1){
            num_men=num;
        }else{
            if(num<num_men)
                num_men=num;
        }
    }

    cout<<"la suma es: "<<suma<<endl;
    media=suma/n;
    cout<<"la media es: "<<media<<endl;
    cout<<"el menor es: "<<num_men;

    return 0;
}


int main(){
    int n,mayor,menor;
    double acumula=0.0;
    cout<<"numeros a ingresar: "<<endl;
    cin>>n;
    for(int cont=0,valor; n>cont;cont=cont+1)
        cout<<"ingrese un numero: ";
        cin>>valor;
        if(cont==n)
            mayor =valor;
            menor
}





