#include<stdio.h>
int main()
{
    int n,i,f;
    scanf("%d",&n);

    f = 0;
    for (i=2; i<n; i++)
    {
        if (n%i == 0)
        {
            f = 1;
        }
    }
    if (f == 1 || n == 1)
    {
        printf("NOT PRIME\n");
    }
    else
    {
        printf("PRIME\n");
    }
    return 0;
}
