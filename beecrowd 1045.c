#include<stdio.h>
#include<math.h>
int main()
{
    double l,m,s;
    double a,b,c;
    scanf("%lf%lf%lf",&a,&b,&c);

    if (a>b)
    {
        if (a>c)
        {
            l = a;
            if (b>c)
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
            if (a>b)
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
        if (b>c)
        {
            l = b;
            if (a>c)
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
            if (a>b)
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
    //printf("%d\n%d\n%d\n",l,m,s);

    if (l>=(m+s))
    {
        printf("NAO FORMA TRIANGULO\n");
    }
    if (pow(l,2)== pow(m,2)+pow(s,2))
    {
        printf("TRIANGULO RETANGULO\n");
    }
    if (pow(l,2) > pow(m,2)+pow(s,2))
    {
        printf("TRIANGULO OBTUSANGULO\n");
    }
    if (pow(l,2) < pow(m,2)+pow(s,2))
    {
        printf("TRIANGULO ACUTANGULO\n");
    }
    if (l==m && m==s)
    {
        printf("TRIANGULO EQUILATERO\n");
    }
    if (((l==m)&&(m!=s)) || ((m==s)&&(s!=l)) || ((l==s)&&(s!=m)))
    {
        printf("TRIANGULO ISOSCELES\n");
    }


    return 0;
}
