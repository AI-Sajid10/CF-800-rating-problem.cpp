#include<stdio.h>
int digit_sum(int x){
    if(x < 10){
        return x;
    }
    int sub = digit_sum(x/10);
    int ld = (x%10);
    int s = sub+ld;
    return s;


}
int main()
{
    int n,s;
    scanf("%d",&n);
    s = digit_sum(n);
    printf("%d",s);
}
