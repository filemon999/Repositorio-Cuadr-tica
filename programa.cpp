//Bibliotecas
#include "stdio.h"
#include "iostream"
#include "math.h"
using namespace std;
int main ()
{
    //Declarar las variables
    double a,b,c,x1,x2;
    //Obtener los datos ocupados
    cin>>a>>b>>c;
    //Hacer las operaciones, una donde se sume y la otra donde se reste
    x1=((-1*b)+sqrt(pow(b,2)-4*a*c))/(2*a);
    x2=((-1*b)-sqrt(pow(b,2)-4*a*c))/(2*a);
    //Imprimir los resultados
    cout<<x1<<" "<<x2;
}
