// Online C compiler to run C program online
#include<stdio.h>
int main()
{
    int x,y,z,i,sum,t,j;
    scanf("%d",&t);
    for(j = 1; j <= t; j++)
    {
        scanf("%d%d",&x,&y);
        if(x > y)
        {
            z = x;
            x = y;
            y = z;
        }
        sum = 0;
        for(i = x+1; i < y; i++)
        {
            if(i % 2 == 1)
            {
                sum += i;
            }

        }
        printf("%d\n",sum);
    }

    return 0;
}
