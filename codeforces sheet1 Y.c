#include<stdio.h>
int main()
{
    long long a,b,c,d,m1,m2,m3,m4;
    scanf("%lld%lld%lld%lld",&a,&b,&c,&d);
    long long x;
    m1 = a % 100;
    m2 = b % 100;
    m3 = c % 100;
    m4 = d % 100;

    x = (m1 * m2 * m3 * m4) % 100;
    if (x == 0){
        printf("00");
    }
    else{
        printf("%lld",x);
    }
    return 0;

}
