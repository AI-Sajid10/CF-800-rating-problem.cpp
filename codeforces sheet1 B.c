#include<stdio.h>
int main()
{
    int a;
    long long b;
    char ch;
    float c;
    double d;
    scanf("%d%lld %c%f%lf",&a,&b,&ch,&c,&d);
    printf("%d\n",a);
    printf("%lld\n",b);
    printf("%c\n",ch);
    printf("%.2f\n",c);
    printf("%.1lf\n",d);
    return 0;
}
