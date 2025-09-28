#include<stdio.h>
#include<string.h>
struct student
{
    char id[20],name[20],group[20];
    int marks;
};
typedef struct student STD;
STD arr[100];
int n,i;
void read_data()
{
    FILE *fp;
    fp = fopen("in.txt","r");
    fscanf(fp,"%d",&n);
    for(i = 0; i < n; i++)
    {
        fscanf(fp,"%s %s %s%d",arr[i].id,arr[i].name,arr[i].group,&arr[i].marks);
    }
    fclose(fp);
}
void write_data()
{
    FILE *fp;
    fp = fopen("in.txt","w");
    fprintf(fp,"%d\n",n);
    for(i = 0; i < n; i++)
    {
        fprintf(fp,"%s\n%s\n%s\n%d\n",arr[i].id,arr[i].name,arr[i].group,arr[i].marks);
    }
    fclose(fp);
}

int main()
{
    int q;
    scanf("%d",&q);
    if(q == 1) //show
    {
        read_data();
        printf("%d\n",n);
        for(i = 0; i < n; i++)
        {
            printf("%s\n%s\n%s\n%d\n",arr[i].id,arr[i].name,arr[i].group,arr[i].marks);
        }
    }
    else if(q == 2) //delete
    {
        char id[20];
        int pos = -1;
        scanf("%s",id);
        read_data();
        for(i = 0; i < n; i++)
        {
            if(strcmp(arr[i].id,id)==0){
                pos = i;
            }
        }
        if(pos != -1)
        {
            for(i = pos; i < n-1; i++){
                arr[i] = arr[i+1];
            }
        }
        n--;
        write_data();
    }
    else if(q == 3) //update
    {
        char id[20];
        int pos = -1,m;
        scanf("%s%d",id,&m);
        read_data();
        for(i = 0; i < n; i++)
        {
            if(strcmp(arr[i].id,id)==0){
                pos = i;
            }
        }
        if(pos != -1)
        {
            arr[pos].marks = m;
        }
        write_data();
    }
    else if(q == 4) //create new
    {
        char id[20],name[20],grp[20];
        int m;
        scanf("%s %s %s%d",id,name,grp,&m);
        read_data();
        strcpy(arr[n].id,id);
        strcpy(arr[n].name,name);
        strcpy(arr[n].group,grp);
        arr[n].marks = m;
        n++;
        write_data();
    }
    else if(q == 5) //shorting
    {
        read_data();
        for(i = 0; i < n; i++){
            for(int j = i+1; j < n; j++){
                if(arr[i].marks > arr[j].marks){
                    STD temp = arr[i];
                    arr[i] = arr[j];
                    arr[j] = temp;
                }
            }
        }
        write_data();
    }

    return 0;

}
