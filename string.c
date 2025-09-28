#include<stdio.h>
int main()
{
    int i,f;
    char x[30];
    gets(x);
    f = 0;
    for(i = 0; x[i] != '\0'; i++)
    {
        if(x[i]=='a' || x[i]=='e' || x[i]=='i' || x[i]=='o' || x[i]=='u')
            f = 1;
    }
    if(f == 1)
        printf("Vowel\n");
    else
        printf("Consonant\n");

    return 0;
}
