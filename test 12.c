// Online C compiler to run C program online
#include<stdio.h>
int main()
{
    int i,n,m,arr[105][105],j,x,f;
    scanf("%d%d",&n,&m);
    for(i = 0; i < n; i++)
    {
        for(j = 0; j < m; j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    scanf("%d",&x);
    f = 0;
    for(i = 0; i < n; i++)
    {
        for(j = 0; j < m; j++)
        {
           if(arr[i][j] == x)
           {
               f = 1;
           }
        }
    }
    if(f == 1)
    {
        printf("will not take number\n");
    }
    else{
        printf("will take number\n");
    }
    return 0;
}
