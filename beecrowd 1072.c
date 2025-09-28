#include<stdio.h>
int main()
{
    int i,n,x,a,b;
    scanf("%d",&n);

    i = 1;
    a = 0;
    b = 0;

    while (i <= n)
    {
        scanf("%d",&x);
        if (x>=10 && x<=20)
        {
            a++;

        }
        else
        {
            b++;

        }

        i++;

    }
    printf("%d in\n",a);
    printf("%d out\n",b);

    return 0;
}
