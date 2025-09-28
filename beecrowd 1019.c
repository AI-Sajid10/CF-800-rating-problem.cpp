#include<stdio.h>
int main()
{
    int s,a,b,c,d,e,f;
    scanf("%d",&s);
    a = s/3600;
    e = a*3600;
    f = s - e;
    b = f/60;
    c = b*60;
    d = f - c;

    printf("%d:%d:%d",a,b,d);

    return 0;
}
