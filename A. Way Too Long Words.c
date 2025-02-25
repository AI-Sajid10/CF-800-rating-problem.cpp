#include<stdio.h>
#include<string.h>
int main()
{
    int n,ln;
    scanf("%d",&n);
    for(int j = 0; j < n; j++)
    {
        char str[101];
        scanf("%s",str);
        ln = strlen(str);
        if(ln > 10)
        {
            int cnt = 0;
            for(int i = 1+1; i <= ln-1; i++)
            {
                cnt++;
            }
            printf("%c%d%c\n",str[0],cnt,str[ln-1]);
        }
        else
        {
            printf("%s\n",str);
        }
    }
    return 0;
}
