#include<stdio.h>
int main()
{
    int n,x,i,j;
    long long int fact;
    scanf("%d",&n);
    for(i = 1; i <= n; i++)
    {
        scanf("%d",&x);
        fact = 1;
        for(j = 1; j <= x; j++)
        {
            fact *= j;
        }
        printf("%lld\n",fact);
    }
    return 0;

}
