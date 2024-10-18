//Este programa pedira los datos A, B y C al usuario y calculara e imprimira las raices x1 y x2 de una ecuación cuadrática
#include "stdio.h"
#include "iostream"
#include "math.h"
using namespace std;
int main ()
{
    double a,b,c,x1,x2;
    cin>>a>>b>>c;
    x1=((-1*b)+sqrt(pow(b,2)-4*a*c))/(2*a);
    x2=((-1*b)-sqrt(pow(b,2)-4*a*c))/(2*a);
    cout<<x1<<" "<<x2;
}
