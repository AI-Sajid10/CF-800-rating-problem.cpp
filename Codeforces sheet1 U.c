#include<stdio.h>
int main()
{
    int i;
    double x,rest;
    scanf("%lf",&x);
    i = x;
    rest = x - i;
    if (rest == 0){
        printf("int %d",i);

    }
    else{
        printf("float %d %.3lf",i,rest);

    }
    return 0;
}
