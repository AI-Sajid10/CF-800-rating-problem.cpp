#include<stdio.h>
int main()
{
    double a,b,c,d;
    scanf("%lf%lf%lf",&a,&b,&c);

    d = b * c;

    printf("NUMBER = %.0lf\n",a);
    printf("SALARY = U$ %.2lf\n",d);

    return 0;

}
