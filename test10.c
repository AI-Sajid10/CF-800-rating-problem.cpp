#include<stdio.h>
int main()
{
    int n,i,cnt,j,pos,t;
    long long int arr[100010];
    scanf("%d",&t);
    for(int k = 0; k < t; k++)
    {
        scanf("%d",&n);
        for(i = 0; i < n; i++)
        {
            scanf("%d",&arr[i]);
        }
        pos = 0;
        cnt = 1;
        for(i = 0; i < n; i++)
        {
            //cnt = 1;
            for(j = i+1; j < n; j++)
            {
                if(arr[i] == arr[j])
                {
                    cnt++;
                    pos = arr[i];
                }
            }
        }
        if(cnt >= 3)
        {
            printf("%d\n",pos);
        }
        else
        {
            printf("-1\n");
        }
    }
    return 0;
}
