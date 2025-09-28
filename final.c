//Bismillahir Rahmanir Raheem
//palindrome
/*#include<stdio.h>
int main()
{
    int i,j,n,arr[100],f;
    scanf("%d",&n);
    for(i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }
    f = 0;
    for(i=0,j=n-1; i < n/2; i++,j--)
    {
        if(arr[i] != arr[j])
        {
            f = 1;
            break;
        }
    }
    if(f == 1){
        printf("NO\n");
    }else{
        printf("YES\n");
    }
    return 0;
}*/
//2d array
/*#include<stdio.h>
int main()
{
    int i,j,r,c,arr[100][100];
    scanf("%d%d",&r,&c);
    for(i = 0; i < r; i++){
        for(j = 0; j < c; j++){
            scanf("%d",&arr[i][j]);
        }
    }
    for(i = 0; i < r; i++){
        for(j = 0; j < c; j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}*/
//2d array diagonal sum
/*#include<stdio.h>
int main()
{
    int r,c,i,j,arr[100][100],sum1,sum2;
    scanf("%d%d",&r,&c);
    for(i = 0; i < r; i++){
        for(j = 0; j < c; j++){
            scanf("%d",&arr[i][j]);
        }
    }
    sum1 = 0;
    for(i = 0; i < r; i++){
        for(j = 0; j < c; j++){
            if(i == j){
                sum1 += arr[i][j];
            }
        }
    }
    sum2 = 0;
    for(i=0,j=r-1; i<r && j>=0; i++,j--){
        sum2 += arr[i][j];
    }
    printf("%d\n%d\n",sum1,sum2);
    return 0;
}*/
//in easy way
/*#include<stdio.h>
int main()
{
    int arr[100][100],i,j,sum1,sum2,r,c;
    scanf("%d%d",&r,&c);
    for(i = 0; i < r; i++){
        for(j = 0; j < c; j++){
            scanf("%d",&arr[i][j]);
        }
    }
    sum1 = 0;
    sum2 = 0;
    for(i = 0; i < r; i++)
    {
        sum1 += arr[i][i];
        sum2 += arr[i][r-i-1];
    }
    printf("%d\n%d\n",sum1,sum2);
    return 0;
}*/
//array sum function
/*#include<stdio.h>
int ARR_SUM(int a[20],int p){
    int i,sum;
    sum = 0;
    for(i = 0; i < p; i++){
        sum += a[i];
    }
    return sum;
}
int main()
{
    int n,arr[20],i,s;
    scanf("%d",&n);
    for(i = 0; i < n; i++){
        scanf("%d",&arr[i]);
    }
    s = ARR_SUM(arr,n);
    printf("%d\n",s);
    return 0;
}*/
//reverse array function
/*#include<stdio.h>
void reverse(int a[],int n){
    int i;
    for(i = n-1; i >= 0; i--){
        printf("%d ",a[i]);
    }
}
int main()
{
    int n,i,r,arr[20];
    scanf("%d",&n);
    for(i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }
    reverse(arr,n);
    return 0;

}*/
//return reverse array
/*#include<stdio.h>
void reverse(int a[],int n){
    int i,j,temp;
    for(i=0,j=n-1; i < n/2; i++,j--){
        temp = a[i];
        a[i] = a[j];
        a[j] = temp;
    }
}
int main()
{
    int n,i,arr[20];
    scanf("%d",&n);
    for(i = 0; i < n; i++){
        scanf("%d",&arr[i]);
    }
    reverse(arr,n);
    for(i = 0; i < n; i++){
        printf("%d ",arr[i]);
    }
    return 0;

}*/
//sp-24 1 er c
/*#include<stdio.h>
int main()
{
    int x,d,i,n,j;
    scanf("%d",&n);
    for(i = 0; i < n; i++){
        scanf("%d%d",&x,&d);
        for(j = 1; j <= x; j++){
            if(j % d == 0){
                printf("%d ",j);
            }
        }
        printf("\n");
    }
    return 0;

}*/
//sp-24 1 er c or
/*#include <stdio.h>
#include <math.h>

int main() {
    int num, originalNum, remainder, result, n = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    originalNum = num;

    // Count the number of digits
    while (originalNum != 0) {
        originalNum /= 10;
        n++;
    }

    originalNum = num;

    // Calculate the sum of digits raised to the power of n
    result = 0;
    while (originalNum != 0) {
        remainder = originalNum % 10;
        result += pow(remainder, n);
        originalNum /= 10;
    }
    printf("%d\n",result);

    // Check if the number is an Armstrong number
    if (result == num)
        printf("%d is an Armstrong number.\n", num);
    else
        printf("%d is not an Armstrong number.\n", num);

    return 0;
}*/
//sp-24 3 er c
/*#include<stdio.h>
int main()
{
    int n,arr[100],i;
    scanf("%d",&n);
    for(i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
        if(arr[i] % 2 == 0){
            arr[i] = 0;
        }
        else{
            arr[i] = -1;
        }
    }
    for(i = n-1; i >= 0; i--)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}*/
//sp-24 3 er c or
/*#include<stdio.h>
int main()
{
    int arr[100][100],n,m,i,j,sum;
    scanf("%d%d",&n,&m);
    for(i = 1; i <= n; i++)
    {
        for(j = 1; j <= m; j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    for(i = 1; i <= n; i++)
    {
        sum = 0;
        for(j = 1; j <= m; j++)
        {
            sum += arr[i][j];
        }
        printf("Sum of row %d: %d\n",i,sum);
    }
    for(j = 1; j <= n; j++)
    {
        sum = 0;
        for(i = 1; i <= m; i++)
        {
            sum += arr[i][j];
        }
        printf("Sum of column %d: %d\n",j,sum);
    }
    return 0;

}*/
//sp-24 4 er c or
/*#include<stdio.h>
#include<string.h>
int main()
{
    char str[20];
    int i,sum;
    gets(str);
    sum = 0;
    for(i = 0; i < strlen(str); i++){
        sum += str[i] - '0';
    }
    printf("%d\n",sum);
    return 0;
}*/
//file handling
/*#include<stdio.h>
int main()
{
    int n,arr[20],i,q,a,b;
    FILE *fr;
    fr = fopen("in.txt","r");
    fscanf(fr,"%d",&n);
    for(i = 1; i <= n; i++)
    {
        fscanf(fr,"%d",&arr[i]);
    }
    fclose(fr);
    scanf("%d",&q);
    if(q == 1)
    {
        printf("%d\n",n);
        for(i = 1; i <= n; i++){
            printf("%d\n",arr[i]);
        }
    }
    else if(q == 2){
        scanf("%d%d",&a,&b);
        arr[a] = b;
        fr = fopen("in.txt","w");
        fprintf(fr,"%d\n",n);
        for(i = 1; i <= n; i++){
            fprintf(fr,"%d\n",arr[i]);
        }
    }
    return 0;
}*/
//structure
/*#include<stdio.h>
struct student{
    char id[20];
    int roll,marks;
};
int main()
{
    struct student a;
    scanf("%s%d%d",a.id,&a.roll,&a.marks);
    printf("%s\n%d\n%d\n",a.id,a.roll,a.marks);
    return 0;

}*/
//sp-22 1 er c
/*#include<stdio.h>
int main()
{
    int n,i,j;
    scanf("%d",&n);
    for(i = 1; i <= n; i++){
        for(j = 1; j <= i; j++){
            printf("*");
        }
        printf("\n");
    }
    for(i = n-1; i >= 1; i--){
        for(j = 1; j <= i; j++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}*/
//sp-22 1 er d
/*#include<stdio.h>
int main()
{
    int num,sum,cnt;
    double avg;
    sum = 0;
    cnt = 0;
    while(1)
    {
        scanf("%d",&num);
        if(num < 0){
            break;
        }
        if(num%3==0 || num%5==0){
            continue;
        }
        sum += num;
        cnt++;
    }
    printf("%d\n",sum);
    avg = (double)sum/cnt;
    printf("%.2lf\n",avg);
    return 0;
}*/
//Prime or not prime multiple test case
/*#include<stdio.h>
int main()
{
    int num,i,f,n,j;
    scanf("%d",&n);
    for(j = 0; j < n; j++){
    scanf("%d",&num);
    f = 0;
    for(i = 2; i <= num/2; i++)
    {
        if(num % i == 0)
        {
            f = 1;
            break;
        }
    }
    if(f==1 || num==1){
        printf("NOT a prime number\n");
    }else{
        printf("PRIME number\n");
    }
    }
    return 0;
}*/
//array shorting
/*#include<stdio.h>
int main()
{
    int i,j,temp,arr[100],n;
    scanf("%d",&n);
    for(i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }
    for(j = 0; j < n-1; j++){
        for(i = 0; i < n-1; i++){
            if(arr[i] > arr[i+1]){
                temp = arr[i];
                arr[i] = arr[i+1];
                arr[i+1] = temp;
            }
        }
    }
    for(i = 0; i < n; i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}*/
/*#include<stdio.h>
#include<string.h>
int main()
{
    char s1[]="IIUC",s2[]="iiuc",s3[10];
    printf("%s\n",strcat(s2,s1));
    printf("%d\n",strlen(s2));
    printf("%s\n",strlwr(s2));
    printf("%s\n",strcpy(s3,s2));
    return 0;

}*/


 
