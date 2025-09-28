#include<stdio.h>
int main()
{
    int i,n,arr[100010],tmp,j;
    scanf("%d",&n);
    for(i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }
    for(j = 0; j < n-1; j++)
    {
        for(i = 0; i < n-1; i++)
    {
        if(arr[i] > arr[i+1])
        {
            tmp = arr[i];
            arr[i] = arr[i+1];
            arr[i+1] = tmp;
        }
    }
    }
    for(i = 0; i < n; i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}
