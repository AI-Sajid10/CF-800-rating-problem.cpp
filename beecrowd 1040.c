#include<stdio.h>
int main()
{
    double n1,n2,n3,n4,a,b,c,d,e,f,g;
    scanf("%lf%lf%lf%lf",&n1,&n2,&n3,&n4);

    d = n1 * 2;
    e = n2 * 3;
    f = n3 * 4;
    g = n4 * 1;

    a = (d + e + f + g)/(2 + 3 + 4 + 1);

    printf("Media: %.1lf\n",a);

    if (a >= 7.0)
    {
        printf("Aluno aprovado.\n");
    }
    else if (a < 5.0)
    {
        printf("Aluno reprovado.\n");
    }
    else if (a>=5.0 && a<7.0)
    {
        printf("Aluno em exame.\n");
        scanf("%lf",&b);
        printf("Nota do exame: %.1lf\n",b);

        c = (a + b)/2;

        if (c >= 5.0)
        {
            printf("Aluno aprovado.\n");
        }
        if (c <= 4.9)
        {
            printf("Aluno reprovado.\n");
        }
        printf("Media final: %.1lf\n",c);
    }


    return 0;

}
