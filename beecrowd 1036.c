#include<stdio.h>
int main()
{
    double a,b,c,r1,r2,h,i;
    scanf("%lf%lf%lf",&a,&b,&c);

    r1 = (-b + sqrt(b*b - 4*a*c)) / (2*a);
    r2 = (-b - sqrt(b*b - 4*a*c)) / (2*a);

    h = (b*b - 4*a*c);
    i = (2*a);

    if (i==0)
    {
        printf("Impossivel calcular\n");
    }
    else if (h<0)
    {
        printf("Impossivel calcular\n");
    }
    else
    {
        printf("R1 = %.5lf\n",r1);
        printf("R2 = %.5lf\n",r2);
    }

    return 0;


}
