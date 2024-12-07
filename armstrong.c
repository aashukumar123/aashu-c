#include<stdio.h>
void main()
{
    int i,a,b,c,x,y,d;


    printf("enetr a armastrong number");
    scanf("%d",&x);
    a=x%10;
    y=x/10;
    b=y%10;
    c=y/10;
    d=(a*a*a)+(b*b*b)+(c*c*c);
    if(d==x)
    {

    
    printf("this is a anstrong number ");
    }
    else{
        printf("this is not a anstrong");
    }

}