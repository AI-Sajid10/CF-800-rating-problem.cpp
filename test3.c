#include<stdio.h>
int main()
{
    int i,i1,i2,i3,i4,i5,i6;
    double a,b,c,d,e,f;
    scanf("%lf%lf%lf%lf%lf%lf",&a,&b,&c,&d,&e,&f);

    if (a>0 || b>0 || c>0 || d>0 || e>0 || f>0)
    {
        i1 = 1;
        i2 = 1;
        i3 = 1;
        i4 = 1;
        i5 = 1;
        i6 = 1;
        i = i1 + i2 + i3 + i4 + i5 + i6;
        printf("%d",i);
    }
    return 0;
}
