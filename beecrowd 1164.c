#include<stdio.h>
int main()
{
    int i,n,x,j,sum;
    scanf ("%d",&n);
    for (j = 0; j < n; j++)
    {
        scanf("%d",&x);
        sum = 0;
        for (i = 1; i < x; i++)
        {
            if (x%i == 0)
            {
                sum +=i;
            }
        }
        if (sum == x)printf("%d eh perfeito\n",x);
        else printf("%d nao eh perfeito\n",x);
    }
    return 0;
}
