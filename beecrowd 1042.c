#include<stdio.h>
int main()
{
    int l,m,s;
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);

    if (a<b)
    {
        if (a<c)
        {
            l = a;
            if (b<c)
            {
                m = b;
                s = c;
            }
            else
            {
                m = c;
                s = b;
            }
        }
        else
        {
            l = c;
            if (a<b)
            {
                m = a;
                s = b;
            }
            else
            {
                m = b;
                s = a;
            }
        }
    }
    else
    {
        if (b<c)
        {
            l = b;
            if (a<c)
            {
                m = a;
                s = c;
            }
            else
            {
                m = c;
                s = a;
            }
        }
        else
        {
            l = c;
            if (a<b)
            {
                m = a;
                s = b;
            }
            else
            {
                m = b;
                s = a;
            }
        }
    }
    printf("%d\n%d\n%d\n\n",l,m,s);
    printf("%d\n%d\n%d\n",a,b,c);

    return 0;
}
