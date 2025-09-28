// Online C compiler to run C program online
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,i;
    long long int m[100010],sum,x;
    scanf("%d",&n);
    for(i = 0; i < n; i++)
    {
        scanf("%lld",&m[i]);
    }
    sum = 0;
    for(i = 0; i < n; i++)
    {
        sum += m[i];
    }
    if(sum < 0)
    {
        x = abs(sum);
        printf("%lld\n",x);
    }
    else{
        printf("%lld\n",sum);
    }
    return 0;
}
