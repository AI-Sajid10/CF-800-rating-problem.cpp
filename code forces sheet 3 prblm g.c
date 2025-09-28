// Online C compiler to run C program online
#include<stdio.h>
int main()
{
    int n,i,j,f;
    long long int arr[100010];
    scanf("%d",&n);
    for(i = 0; i < n; i++)
    {
        scanf("%lld",&arr[i]);
    }
    f = 0;
    for(i = 0,j = n-1; i < n; i++,j--)
    {
        if(arr[i] != arr[j])
        {
            f = 1;
        }
    }
    if(f == 1)
    {
        printf("NO\n");
    }
    else
    {
        printf("YES\n");
    }
    return 0;
}
