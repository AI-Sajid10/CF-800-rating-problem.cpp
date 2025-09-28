#include<stdio.h>
#include<string.h>
struct student{
    char id[10];
    int roll,marks;
};
typedef struct student STD;
int n,i;
STD arr[20];
void readData()
{
     FILE *fp;
    fp = fopen("student.txt","r");
    fscanf(fp, "%d",&n);
    for(i = 0; i < n; i++)
    {
        fscanf(fp,"%s%d%d",arr[i].id,&arr[i].roll,&arr[i].marks);
    }
    fclose(fp);

}
int main()
{
    char id[10];
    scanf("%s",id);
    readData();
    for(i = 0; i < n; i++)
    {
        if(strcmp(arr[i].id,id)!=0){
            printf("%s\n%d\n%d\n",arr[i].id,arr[i].roll,arr[i].marks);
        }
    }
    return 0;
}