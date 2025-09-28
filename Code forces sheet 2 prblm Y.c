// Online C compiler to run C program online
#include<stdio.h>
int main()
{
    int n,i,f,s,nxt;
    scanf("%d",&n);
    f = 0;
    s = 1;
    printf("%d ",f);
    nxt = f + s;
    for(i = 2; i <= n; i++)
    {
        printf("%d ",nxt);
        nxt = f + s;
        f = s;
        s = nxt;
    }
    return 0;

}
