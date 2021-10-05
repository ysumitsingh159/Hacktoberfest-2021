#include <stdio.h>
int main()
{int a,b,c,d,e,f,g,h,i,j,k,l,m,n,num;
printf("Enter the number = ");
scanf("%d",&num);
for (a=1;a<=(num*2);a++)//lines of rhombus
    {
        for(l=1;l<=num;l++)
        {
            printf("  ");
        }
        for(b=(num*2);b>a;b--)//rows of rhombus
        {
            printf("  ");
        }
        for(c=1;c<=a;c++)//stars in rhombus triangle
        {
            printf("* ");
        }
        printf("\n");
        if (a==num){ break;}//stops in line 7
    }
for(d=1;d<=num;d++)//lines in left triangle
{
    for(m=1;m<=num;m++)
        {
            printf("  ");

        }
    for (e=1;e<d;e++)//rows in left triangle
    {
        printf("  ");
    }
    for (f=num;f>=d;f--)//stars in left triangle=f
    {
        printf("* ");
    }
    for (g=1;g<=num;g++)//plus mark square rows=g
    {
        if(g==1||g==num||g==d||g==e||e==1||e==num||e==num-g+1)
        {
            printf("+ ");
        }
        else
        {
            printf("  ");
        }
    }
    for (h=1;h<=d;h++)//right triangle
    {
        printf("* ");
    }

    printf("\n");
}
for(i=1;i<=num;i++)//lines in last blank square
{
    for(n=1;n<=num;n++)
        {
            printf("  ");
        }
    for(j=1;j<=num;j++)//rows in last blank square
    {
        printf("  ");
    }

    for(k=num;k>=i;k--)
    {
        printf("* ");
    }
    printf("\n");
}

}