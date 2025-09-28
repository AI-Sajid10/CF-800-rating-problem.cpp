#include<stdio.h>
int main()
{
    int x,y,z,i,sum;
    while(1)
    {
        scanf("%d%d",&x,&y);
        if(x > y)
        {
            z = x;
            x = y;
            y = z;
        }
        if((x < 0 || x == 0) || (y < 0 || y == 0))
        {
            break;
        }
        sum = 0;
        for(i = x; i <= y; i++)
        {
            sum += i;
            printf("%d ",i);
        }
        printf("sum =%d\n",sum);
    }

    return 0;
}
