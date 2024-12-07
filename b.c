#include<stdio.h>
void main()
{
    int x,y,p,s=0;
    printf("enter a number by the user");
    scanf("%d",&x);
    
    y=x;
    while(y!=0)
    {
        p=y%10;
        s=s+(p*p*p);
        x=y/10;
    }
    if(x==s)
    {
        printf("this paldonanumber ");
    }
    else
    {
        printf("this not padolinian number");


    }


}