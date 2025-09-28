#include<stdio.h>
int main()
{
    int h,s,t;
    double a;
    scanf("%d%d",&h,&s);
    t = h*s;
    a = (double)t/12;
    printf("%.3lf\n",a);

    return 0;
}
