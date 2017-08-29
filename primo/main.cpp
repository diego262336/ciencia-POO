#include <iostream>

using namespace std;

int main()
{
    int i=3, contador=1,n,f;//d=2;
    cout<<"ingrese un numero"<<endl;
    cin>>n;
    //cout<<d;
    while(contador<n){
        f=0;
        for(int j=2;j<=i/2;j++)
            if(i%j==0)
            {
                f=1;
            }
        if(f==0)
        {
            //cout<<"  "<<i;
            contador++;
        }
        i++;
    }
    cout<<" El enesimo nuemero es:  "<<i-1;
    return 0;
}
