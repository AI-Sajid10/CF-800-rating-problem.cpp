#include<stdio.h>
int main()
{
    int l1,r1,l2,r2,x,y;
    scanf("%d%d%d%d",&l1,&r1,&l2,&r2);
    if (l1 > l2){
        x = l1;
    }
    else{
        x = l2;
        }

    if (r1 < r2){
        y = r1;
    }
    else{
        y = r2;
        }

    if (x > y){
        printf("-1");
    }
    else{
        printf("%d %d",x,y);
    }

    return 0;

}
