#include<stdio.h>
int main()
{
    int i,n,x,a,b,c,d,e;
    scanf("%d",&n);

    i = 1;
    while (i <= n)
    {
        scanf("%d",&x);
        if (x%2==0 && x>0)
        {
            printf("EVEN POSITIVE\n");

        }
        if (x%2==0 && x<0)
        {
            printf("EVEN NEGATIVE\n");
        }
        if (x%2!=0 && x>0)
        {
            printf("ODD POSITIVE\n");
        }
        if (x%2!=0 && x<0)
        {
            printf("ODD NEGATIVE\n");
        }
        if (x==0)
        {
            printf("NULL\n");
        }


        i++;
    }


    return 0;
}
