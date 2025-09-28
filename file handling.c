#include<stdio.h>
int main()
{
    char a;
    FILE *fr;
    fr = fopen("in.txt","r");
    fscanf(fr,"%c",&a);
    fclose(fr);
    if(a>='A' && a<='Z'){
        printf("Upper case");
    }
    else{
        printf("Lower case");
    }
    return 0;
}
