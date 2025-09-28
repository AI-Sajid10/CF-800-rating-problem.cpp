#include<stdio.h>
int main()
{
    int a,b;
    FILE *fr;
    fr = fopen("in.txt","r");
    fscanf(fr,"%d%d",&a,&b);
    fclose(fr);
    /*FILE *fw;
    fw = fopen("out.txt","w");
    fprintf(fw,"%d",a+b);*/
    fr = fopen("out.txt","w");
    fprintf(fr,"%d",a+b);

    return 0;
}
