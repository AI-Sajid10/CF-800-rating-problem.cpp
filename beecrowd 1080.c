#include<stdio.h>
int main()
{
    int i,n,x,mx,pos;

    i = 1;
    n = 100;
    mx = -1;
    pos = -1;

    while (i <= n)
    {
        scanf("%d",&x);
        if (x > mx)
        {
            mx = x;
            pos = i;
        }
        i++;
    }
    printf("%d\n",mx);
    printf("%d\n",pos);

    return 0;

}
