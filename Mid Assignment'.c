#include <stdio.h>
int main()
{
    printf("Ahmed Ibrahim Sajid ; ID : C243042\n\n");
    int x,y,i,cnt,z,m,a,b;
    scanf("%d%d%d%d%d%d",&x,&a,&b,&y,&z,&m);
    cnt = 0;
    for(i = 1973; i <= y; i += 5)
    {
        cnt++;
    }
    if((z >= 3 && m >= 7 ) && (a <= 3 && b <= 7) || (x < 1973))
    {
        printf("Total Election: %d\n",cnt);
    }
    else
    {
        printf("Total Election: %d\n",cnt-1);
    }
    cnt = 0;
    if(x <= 1955)
    {
        for(i = 1973; i <= y; i += 5)
        {
            cnt++;
        }
        if((z <= 3 && m <= 7 ) && (a >= 3 && b >= 7) || (x > 1973))
        {
            printf("Total Election: %d\n",cnt);
        }
        else
        {
            printf("Total Election: %d\n",cnt-1);
        }
    }
    else
    {
        for(i = x+18; i <= y; i += 5)
        {
            cnt++;
        }
        if((z <= 3 && m <= 7 ) && (a >= 3 && b >= 7) || (x > 1973))
        {
            printf("Eligible Elections: %d\n",cnt);
        }
        else
        {
            printf("Eligible Elections: %d\n",cnt-1);
        }
    }
    return 0;
}

