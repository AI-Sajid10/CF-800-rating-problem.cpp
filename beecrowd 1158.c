#include<stdio.h>
int main()
{
    int i,x,n,sum,j,y;
    scanf ("%d",&n);
    for (j = 0; j < n; j++){
        scanf ("%d%d",&x,&y);
        sum = 0;
        if (x%2 == 0)x++;
        for (i = 0; i < y; i++){
            sum +=x;
            x += 2;
        }
        printf("%d\n",sum);
    }
    return 0;

}
