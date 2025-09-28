#include<stdio.h>
int main()
{
    int x,i,arr[100010],n,sz,max,t,tc;
    scanf("%d",&t);
    for(tc = 0; tc < t; tc++)
    {
        scanf("%d",&n);
        for(i = 0; i < n; i++)
        {
            scanf("%d",&arr[i]);
        }
        for(sz = 1; sz <= n; sz++)
        {
            for(x = 0; x <= n-sz; x++)
            {
                max = 0;
                for(i = x; i < x+sz; i++)
                {
                    if(arr[i] > max)
                    {
                        max = arr[i];
                    }
                }
                printf("%d ",max);
            }
        }
        printf("\n");
    }

    return 0;
}

