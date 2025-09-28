#include<stdio.h>
int main()
{
    double a,b,c,d,e;
    scanf("%lf%lf",&a,&b);

    /* To calculate weighted average,
     multiply all values in the data set by their corresponding weights.
     Then,add up the resulting products and divide by the sum of the weights */

     c = a * 3.5;
     d = b * 7.5;

     e = (c + d)/(3.5 + 7.5);

     printf("MEDIA = %.5lf\n",e);

     return 0;

}
