#include<stdio.h>
int main()
{
    int arr[10][10],i,n,sum,j,x;
    scanf("%d",&n);
    for(i = 0; i < n; i++)
    {
        for(j = 0; j < n; j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    //scanf("%d",&x);
    for(x = 0; x < n; x+=2)
    {
        sum = 0;
        for(i = 0; i < n; i++)
        {
            //printf("%d ",arr[x-1][i]);
            sum += arr[x][i];
        }
        printf("%d\n",sum);
    }
    return 0;
}
