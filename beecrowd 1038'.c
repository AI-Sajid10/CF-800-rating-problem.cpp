#include<stdio.h>
int main()
{
    float x;
    int a,b;
    scanf("%d%d",&a,&b);

    if (a == 1)
    {
        x = 4.00*b;

    }
    else if (a == 2)
    {
        x = 4.50*b;

    }
    else if (a == 3)
    {
        x = 5.00*b;

    }
    else if (a == 4)
    {
        x = 2.00*b;

    }
    else if (a == 5)
    {
        x = 1.50*b;
    }
    printf("Total: R$ %.2f\n",x);


    return 0;

}
