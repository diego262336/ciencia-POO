#include <iostream>
#include <cmath>
using namespace std;

int main()

{
    int n;
    float x;
    cout<<"numero: ";
    cin>>n;
    x=sqrt(n);
    if(x-int(x)!=0){
        cout<<"no tiene raiz exacta ";

    }
    else{
        cout<<"si tiene raiz exacta"<<endl;
        if(int(x)%2==0)
            cout<<"si es multiplo de 2";
        else
            cout<<"no es multiplo de 2";
    }
    return 0;
}
