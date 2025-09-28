#include<stdio.h>
#include<string.h>
int main()
{
    int i;
    char x[10010];
    scanf("%s",x);
    int sum = 0;
    for(i = 0; i < strlen(x); i++)
    {
            sum += x[i]-'0';
    }
    printf("%d",sum);
    return 0;
}
