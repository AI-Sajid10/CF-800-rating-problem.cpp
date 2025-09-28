#include<stdio.h>
int main()
{
    int n,m,i,arr[100010],cnt[100010]={},x;
    scanf("%d%d",&n,&m);
    for(i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i = 0; i < n; i++)
    {
        x = arr[i];
        cnt[x]++;
    }
    for(i = 1; i <= m; i++)
    {
        printf("%d\n",cnt[i]);
    }
    return 0;

}
