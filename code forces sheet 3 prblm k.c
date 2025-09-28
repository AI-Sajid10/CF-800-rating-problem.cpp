#include<stdio.h>
int main()
{
    int n,i,r,t,arr[10],sum;
    scanf("%d",&t);
    sum = 0;
    for(i = 0; i < t; i++)
    {
        scanf("%d",&arr[i]);
        while(arr[i] != 0)
        {
            r = arr[i] % 10;
            arr[i] = arr[i]/10;
            sum += r;
        }
    }
    printf("%d\n",sum);
    return 0;
}
