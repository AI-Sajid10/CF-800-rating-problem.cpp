#include<stdio.h>
int arr[100],n;

int sum(int i)
{
    if(i == n-1){
        return arr[i];
    }
    int sm = sum(i+1) + arr[i];
    return sm;
}
int main()
{
    int i,s;
    scanf("%d",&n);
    for(i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }
    s = sum(0);
    printf("%d",s);

    return 0;
}
