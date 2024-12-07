#include<stdio.h>
 void main()
 {
    int x;
    int y;
    printf("enter a number");
    scanf("%d%d",&x,&y);
    if(x>y)
    {
        printf("this is a greater than five");

    }
    else if(x<y)
    {
        printf("this is no greater than");
    }
    else if(x==y)
    {
        printf("this equal to");
    }
 }