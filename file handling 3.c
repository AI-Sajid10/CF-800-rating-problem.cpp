#include<stdio.h>
int main()
{
    int a,b;
    FILE *fp;
    fp = fopen("game.txt","r");
    fscanf(fp,"%d",&a);
    fclose(fp);
    scanf("%d",&b);
    if(b > a){
        fp = fopen("game.txt","w");
        fprintf(fp,"%d",b);
        fclose(fp);
    }
    return 0;
}
