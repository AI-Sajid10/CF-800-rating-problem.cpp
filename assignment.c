#include<stdio.h>
int main()
{
    double x,y,z,t,a;
    printf("Enter Marks of 3 Subject = ");
    scanf("%lf%lf%lf",&x,&y,&z);
    t = x + y + z;
    a = (t / 3);
    printf("Total Marks = %.2lf\n",t);
    printf("Average Marks = %.2lf\n",a);
    return 0;
}
