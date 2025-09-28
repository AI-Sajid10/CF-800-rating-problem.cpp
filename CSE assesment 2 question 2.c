#include<stdio.h>
int main()
{
    int arr[10][10],i,j,n,x;
    scanf("%d",&n);
    for(i = 0; i < n; i++)
    {
        for(j = 0; j < n; j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    scanf("%d",&x);
    for(i = 0; i < n; i++)
    {
        for(j = 0; j < n; j++)
        {
            if(arr[i][j] == x){
                printf("%d is found = %d %d\n",x,i,j);
            }
        }
    }
    return 0;

}
