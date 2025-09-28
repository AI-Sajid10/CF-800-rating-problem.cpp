#include<stdio.h>
int main()
{
    double a,b,c,p,q;
    scanf("%lf%lf%lf",&a,&b,&c);

    if (a+b >c && b+c >a && a+c >b)
    {
        p = a + b + c;
        printf("Perimetro = %.1lf\n",p);
    }
    else
    {
        q = ((a + b)/2)*c;
        printf("Area = %.1lf\n",q);
    }
    return 0;

}
