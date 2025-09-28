#include<stdio.h>
int main()
{
    int a,b,c,d,e,f,g;
    scanf("%d",&a);
    b = a/365; //800/365 = 2
    c = b*365; //2*365 = 730
    d = a - c; //800 - 730 = 70
    e = d/30; //70/30 = 2
    f = e*30; //2*30 = 60
    g = d - f; //70 - 60 = 10

    printf("%d ano(s)\n",b);
    printf("%d mes(es)\n",e);
    printf("%d dia(s)\n",g);
    return 0;


}
