#include<stdio.h>
void rvrs_str(int x)
{
    if(x == 1){
        printf("*");
        return;
    }
    for(int i = 0; i < x; i++){
        printf("*");
    }
    printf("\n");
    rvrs_str(x-1);
}
int main()
{
    int n;
    scanf("%d",&n);
    rvrs_str(n);
}
