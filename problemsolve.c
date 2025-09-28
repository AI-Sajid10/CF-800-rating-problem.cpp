#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
    int i,ln;
    char str[100];
    gets(str);
    ln = strlen(str);
    for(i = 0; i < ln; i++)
    {
        if(isupper(str[i])){
            str[i] = str[i] + 32;
        }
        else if(islower(str[i])){
            str[i] = str[i] - 32;
        }
        else if(str[i] == ','){
            str[i] = ' ';
        }
    }
    printf("%s",str);
}