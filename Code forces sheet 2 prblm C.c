#include<stdio.h>
int main()
{
    int n,x,i,cnt,pos,neg,odd;
    scanf("%d",&n);
    cnt = 0;
    odd = 0;
    neg = 0;
    pos = 0;
    for(i = 1; i <= n; i++)
    {
        scanf("%d",&x);
        if (x % 2 == 0 || x == 0)
        {
            cnt++;
        }
        if(x % 2 != 0)
        {
            odd++;
        }
        if(x > 0)
        {
            pos++;
        }
        if(x < 0)
        {
            neg++;
        }
    }
    printf("Even: %d\n",cnt);
    printf("Odd: %d\n",odd);
    printf("Positive: %d\n",pos);
    printf("Negative: %d\n",neg);


    return 0;
}
