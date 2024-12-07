#include<stdio.h>
void main()
{
    int x,y,p,s=1;
    printf("enter a number by the user");
    scanf("%d",&x);
    
    y=x;
    while(y!=0)
    {  
        s=0;
        p=y%10;
        s=s*p;
        y=y/10;
    
    if(x==s)
    {
        printf("this palidion number %d ",s);
    }
    }
    if(x!=s)
    {
        printf("this not arm number");


    }


}