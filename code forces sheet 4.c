#include<stdio.h>
#include<string.h>
int main()
{
    int i,n,f;
    char str[100][20],x[20];
    scanf("%d",&n);
    for(i = 0; i < n; i++)
    {
        scanf("%s",str[i]);
    }
    scanf("%s",x);
    f = 0;
    for(i = 0; i < n; i++){
        if(strcmp(str[i],x == 0)){
            f = 1;
        }
    }
    if(f == 1)
        printf("YES\n");
    else
        printf("NO\n");
    return 0;
}
