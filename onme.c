#include<stdio.h>
int max_number(int a, int b, int c, int d)
{
    if(a>b)
    {
        printf("%d",a);
    }
    else if(b>c)
    {
        printf("%d",b);
    }
    else if(c>d)
    {
        printf("%d",c);
    }
    else if(d>a)
    {
        printf("%d",d);

    }
    else
    {
        printf("nothinmg");

    }
    return 0; ;
}
int main()
{
    int a,b,c,d;
    scanf("%d %d %d %d",&a ,&b, &c,&d);
    int ans=max_number(a,b,c,d);
    printf("%d",ans);
    return 0;
}

