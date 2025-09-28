#include <stdio.h>

int main() {
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
    //printf("%d\n",cnt);


    return 0;
}
