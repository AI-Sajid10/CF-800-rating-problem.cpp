#include<stdio.h>
#include<math.h>
int main()
{
    double a,b,c,d,e,f,g,h;
    scanf("%lf%lf%lf",&a,&b,&c);

    d = 1/2.0*a*c;
    e = 3.14159*pow(c,2);
    f = ((a+b)/2)*c;
    g = pow(b,2);
    h = a*b;

    printf("TRIANGULO: %.3lf\n",d);
    printf("CIRCULO: %.3lf\n",e);
    printf("TRAPEZIO: %.3lf\n",f);
    printf("QUADRADO: %.3lf\n",g);
    printf("RETANGULO: %.3lf\n",h);

    return 0;
}
