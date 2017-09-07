#include <iostream>

using namespace std;


//Calcula la suma de todos los m�ltiplos de 3 o 5 por debajo de 1000.
int main() {
    unsigned i, sum;
    sum = 0;
    for (i = 1; i < 1000; i++) {
        if ((i % 3 == 0) || (i % 5 == 0))
            sum += i;
    };
    cout<<sum<<endl;
    return 0;
}



//Considerando los t�rminos en la secuencia de Fibonacci cuyos valores no exceden los cuatro millones, encuentre la suma de los t�rminos pares.
int main()
{
    int a=1,b=2,temp,sum=0;
    while(b<=4000000){
        temp=a+b;
        a=b;
        b=temp;
        if(a%2==0){
            sum+=a;
        }
    }
    cout<<sum;
    return 0;
}


//�Cu�l es el factor primo m�s grande del n�mero 600851475143?
int main()
{
    long long int i, resultado;
    long long int maxvalor = 600851475143;
    int num;
    for( i = 2; i < maxvalor; i++)
    {
       if(maxvalor % i == 0)
       {
           maxvalor /= i;
           i = 2;
        }
    }
    cout<<"el factor primo m�s grande del n�mero 600851475143 es  "<< maxvalor ;
    return 0;
}


//Encuentra el pal�ndromo m�s grande fabricado con el producto de dos n�meros de 3 d�gitos.
int palindromo(unsigned int n);
int main(void)
{
    unsigned int i, j, maximo = 0;
    for (i = 100; i <= 999; i++) {
        for (j = 100; j <= 999; j++) {
            unsigned int p = i*j;
            if (palindromo(p) && p > maximo) {
                maximo = p;
            }
        }
    }
    cout<<endl<< maximo;
    return 0;
}
int palindromo(unsigned int n)
{
    unsigned int reversa = 0, t = n;

    while (t) {
        reversa = 10*reversa + (t % 10);
        t /= 10;
    }
    return reversa == n;
}



//�Cu�l es el n�mero positivo m�s peque�o que es divisible por todos los n�meros del 1 al 20?
bool calcular(int numero, int n) {
    if (n == 0) {
        return true;
    }
    return (numero % n != 0) ? false : calcular(numero,n-1);
}

int main() {
    int numero = 20;
    int resultado = numero;
    while (!calcular(resultado, numero)) {
        resultado += numero;
    }
    std::cout << resultado << '\n';
}
