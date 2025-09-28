#include<stdio.h>
int main()
{

    char a;

    double b,c,bonous,total;
    scanf("%s%lf%lf",&a,&b,&c);
    bonous = (c * 0.15);
    total = b + bonous;
    printf("TOTAL = R$ %.2lf\n",total);
    return 0;
}
