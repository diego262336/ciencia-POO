#include <iostream>

using namespace std;

/*int main()
{
    int anio;
    cout<<"ingrese un anio: "<<endl;
    cin>>anio;
    if(anio%4==0){
        if((anio%100)==0&&(anio%400)==0)
            cout<<"si"<<endl;
        else
            cout<<"no"<<endl;
    }
    return 0;
}*/

/*
int main()
{
    int n,x=0;
    cout<<"ingrese un numero: "<<endl;
    cin>>n;

    for(int i=1;i<(n+1);i++){
        if(n%i==0){
            x++;
        }

    }
    if(x!=2){
        cout<<"no es primo";


    }else
        cout<<"es primo";

    return 0;
}
*/
/*
int main()
{
    int n;
    int i=0;
    cout<<"ingrese un numero: "<<endl;
    cin>>n;

    while(())


    }


    return 0;
}
*/
int main()
{
    int fahr, celsius;
    int lower, upper , step;
    lower=0;
    upper=300;
    step=20;
    fahr=lower;

    while(fahr<=upper){
        celsius=5*(fahr-32)/9;
        cout<<fahr<<"\t"<<celsius<<endl;
        fahr=fahr+step;
    }

    int fahr;
    for(int fahr=0;fahr<=300;fahr=fahr+20){

    }
    return 0;
}
















