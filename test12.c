#include<stdio.h>
int main()
{
    int arr[10][10],i,j,r,c,x;
    scanf("%d%d",&r,&c);
    for(i = 0; i < r; i++)
    {
        for(j = 0; j < c; j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    scanf("%d",&x);
    int f = 0;
    for(i = 0; i < r; i++)
    {
        for(j = 0; j < c; j++)
        {
            if(arr[i][j] == x)
            {
                f = 1;
            }

        }
    }
    if (f == 1)
       printf("YES");
    else
        printf("NO");

    return 0;
}
