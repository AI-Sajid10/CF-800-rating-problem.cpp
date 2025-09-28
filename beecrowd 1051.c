#include<stdio.h>
int main()
{
    double a,b,c,d,t,t1,t2,t3;
    scanf("%lf",&a);
    if (a<=2000.00)
    {
        printf("Isento\n");
    }
    else if (a > 2000) //4520>2000
    {
        b = a - 2000; //2520
        if (b > 1000) //2520>1000
        {
            c = b - 1000; //1520
            t1 = 1000*0.08;

        }
        else
        {
            t1 = b*0.08;
        }
        if (c > 1500)
        {
            t2 = 1500*0.18;
            d = c - 1500;
        }
        else
        {
            t2 = c*0.18;

        }
        t3 = d*0.28;


    t = t1 + t2 + t3;
    printf("R$ %.2lf\n",t);
    }

    return 0;




}
