#include<stdio.h>
int main()
{
	int arr[10][10],i,j,r,c;
	scanf("%d%d",&r,&c);
	for(i = 0; i < r; i++)
	{
		for(j = 0; j < c; j++)
		{
			scanf("%d",&arr[i][j]);
		}
	}
	for(i = 0; i < r; i++)
	{
		for(j = 0; j < c; j++)
		{
			printf("%d ",arr[i][j]);
		}
		printf("\n");
	}
	return 0;

}