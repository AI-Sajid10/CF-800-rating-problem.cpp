#include<stdio.h>
int main()
{
    int n,i;
    double x,y,z,a;
    scanf("%d",&n);

    i = 1;

    while (i<=n)
    {
        scanf("%lf%lf%lf",&x,&y,&z);

        a = ((x*2) + (y*3) + (z*5))/(2+3+5);
        printf("%.1lf\n",a);


        i++;
    }


    //a = ((x*2) + (y*3) + (z*5))/(2+3+5);
    //printf("%.1lf\n",a);


    return 0;
}
