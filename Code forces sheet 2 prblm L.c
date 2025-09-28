#include<stdio.h>
int main()
{
    int a,b,i,mx;
    scanf("%d%d",&a,&b);
    mx = 0;
    for(i = 1; i <= b; i++)
    {
        if(a % i == 0 && b % i == 0)
        {
            if(i > mx)
            {
                mx = i;
            }
        }
    }
    printf("%d\n",mx);
    return 0;
}
