#include<stdio.h>
void swap(int x, int y){
    int temp = x;
    x = y;
    y = temp;
}
int main()
{
    int a,b;
    scanf("%d%d",&a,&b);
    int *p;
    int *q;
    p = &a;
    q = &b;
    swap(p,q);
    printf("%d %d",a,b);

    return 0;

}