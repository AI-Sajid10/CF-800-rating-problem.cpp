#include<stdio.h>
int main()
{
    double a,b,c,d,e,f,g;
    scanf("%lf%lf%lf",&a,&b,&c);

    d = a * 2;
    e = b * 3;
    f = c * 5;

    g = (d + e + f)/(2 + 3 + 5);
    printf("MEDIA = %.1lf\n",g);

    return 0;
}
