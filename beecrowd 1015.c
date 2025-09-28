#include<stdio.h>
#include<math.h>
int main()
{
    double x1,y1,x2,y2,a,b,distance;
    scanf("%lf%lf",&x1,&y1);
    scanf("%lf%lf",&x2,&y2);
    a = x2 - x1;
    b = y2 - y1;

    distance = sqrt(pow(a,2) + pow(b,2));
    printf("%.4lf\n",distance);
    return 0;

}
