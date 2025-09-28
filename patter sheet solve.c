#include<stdio.h>
int main()
{
    int n,row,col,m;
    scanf("%d",&n);
    //scanf("%d",&m);
    for (row = 1; row <= n; row++)
    {
        for (col = 1; col <= n-row; col++)
        {
            printf(" ");
        }
        for (col = 1; col <= 2*row-1; col++)
        {
            printf("*");
        }
        printf("\n");
    }
    for (row = n-1; row >= 1; row--)
    {
        for (col = 1; col <= n-row; col++)
        {
            printf(" ");
        }
        for (col = 1; col <= 2*row-1; col++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
