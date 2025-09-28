#include<stdio.h>
int main()
{
    int n,s,r,c,total,i,x;
    char ch;
    scanf("%d",&n);
    total = s = r = c = 0;
    for (i = 1; i <= n; i++){
        scanf("%d %c",&x,&ch);
        total += x;
        if (ch == 'S'){
            s += x;
        }
        if (ch == 'R'){
            r += x;
        }
        if (ch == 'C'){
            c += x;
        }

    }
    printf("Total: %d cobaias\n",total);
    printf("Total de coelhos: %d\n",c);
    printf("Total de ratos: %d\n",r);
    printf("Total de sapos: %d\n",s);
    printf("Percentual de coelhos: %.2lf %%\n",(double)c / total * 100);
    printf("Percentual de ratos: %.2lf %%\n",(double)r / total * 100);
    printf("Percentual de sapos: %.2lf %%\n",(double)s / total * 100);

    return 0;
}
