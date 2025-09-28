#include<stdio.h>
void str(int x)
{
    if(x == 1){
        printf("*\n");
        return;
    }
    str(x-1);
    for(int i = 0; i < x; i++){
        printf("*");
    }
    printf("\n");
}
int main()
{
    int n;
    scanf("%d",&n);
    str(n);


}
