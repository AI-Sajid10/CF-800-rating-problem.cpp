#include<stdio.h>
int main()
{
    int n,i,j,f,x,k;
    scanf("%d",&n);
    for(k = 1; k <= n; k++)
    {
        scanf("%d",&j);
        x = j;
        f = 0;
        for(i = 2; i < x; i++)
        {
            if(x % i == 0)
            {
                f = 1;
            }
        }
        if(f == 1 || x == 1)
        {
            printf("%d nao eh primo\n",x);
        }
        else
        {
            printf("%d eh primo\n",x);
        }
    }
    return 0;
}
