#include<stdio.h>
int main()
{
    int a,time1,time2;
    scanf("%d%d",&time1,&time2);

    a = (time2 - time1 + 24) % 24;

    if (time1 == time2)
    {
        printf("O JOGO DUROU %d HORA(S)\n",a+24);
    }
    else
    {
        printf("O JOGO DUROU %d HORA(S)\n",a);
    }

    return 0;
}

