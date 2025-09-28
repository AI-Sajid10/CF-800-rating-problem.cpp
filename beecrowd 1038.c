#include<stdio.h>
int main()
{
    float a;
    int x,y;
    scanf("%d%d",&x,&y);

    if (x == 1)
    {
        a = 4.00*y;

    }
    else if (x == 2)
    {
        a = 4.50*y;
    }
    else if (x == 3)
    {
        a = 5.00*y;
    }
    else if (x == 4)
    {
        a = 2.00*y;
    }
    else if (x == 5)
    {
        a = 1.50*y;
    }
    printf("Total: R$ %.2f\n",a);

    return 0;
}
