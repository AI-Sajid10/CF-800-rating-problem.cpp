#include<stdio.h>
int main()
{
    int i,i1,i2,i3,i4,i5,i6;
    double a,b,c,d,e,f;
    scanf("%lf%lf%lf%lf%lf%lf",&a,&b,&c,&d,&e,&f);

    if (a>0)
    {
        i1 = 1;
    }
    else
        {
            i1 = 0;
        }


    if (b>0)
    {
        i2 = 1;
    }
        else
        {
            i2 = 0;
        }

    if (c>0)
    {
        i3 = 1;
    }
        else
        {
            i3 = 0;
        }


    if (d>0)
    {
        i4 = 1;
    }
        else
        {
            i4 = 0;
        }


    if (e>0)
    {
        i5 = 1;
    }
        else
        {
            i5 = 0;
        }


    if (f>0)
    {
        i6 = 1;
    }
        else
        {
            i6 = 0;
        }

    i = i1 + i2 + i3 + i4 + i5 + i6;

    printf("%d valores positivos\n",i);

    return 0;

}
