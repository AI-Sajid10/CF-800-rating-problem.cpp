#include<stdio.h>
int main()
{
    int i,j,n;
    scanf("%d",&n);
    int arr1[n];
    int ar2[n];
    for(i = 0; i < n; i++)
    {
        scanf("%d",&arr1[i]);
    }
    for(i = 0; i < n; i++)
    {
        ar2[i] = arr1[i];
    }
    for(i = 0; i < n; i++)
    {
        for(j = i; j <= i; j++)
        {
            if(arr1[i]+ar2[j] <= arr1[i+1]+ar2[j+1])
            {
                ar2[j] = arr1[i];
            }
            else{
                ar2[j] = arr1[i+1];
            }
        }
        printf("%d ",ar2);
    }

    return 0;
}
