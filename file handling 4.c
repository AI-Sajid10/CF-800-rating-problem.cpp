#include<stdio.h>
int main()
{
    int n,arr[20],q,r,m,i;
    FILE *fp;
    fp = fopen("in.txt","r");
    fscanf(fp,"%d",&n);
    for(int i = 0; i < n; i++)
    {
        fscanf(fp,"%d",&arr[i]);
    }
    fclose(fp);
    scanf("%d",&q);
    if(q == 1)
    {
        for(int i = 0; i < n; i++)
        {
            printf("%d: %d\n",i+1,arr[i]);
        }
    }
    else if (q == 2)
    {
        scanf("%d%d",&r,&m);
        fp = fopen("in.txt","w");
        arr[r-1] = m;
        fprintf(fp,"%d\n",n);
        for(int i = 0; i < n; i++)
        {
            fprintf(fp,"%d\n",arr[i]);
        }
        fclose(fp);

    }
    else if(q == 3)
    {
        scanf("%d",&r);
        fp = fopen("in.txt","w");
        for(int i = 0; i < n; i++)
        {
            if(i != r-1)
                fprintf(fp,"%d\n",arr[i]);

        }

        fclose(fp);
    }
    return 0;
}
