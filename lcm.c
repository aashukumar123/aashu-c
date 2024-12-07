#include<stdio.h>
void main()
{
    int i,x,y;
    printf("take a number for finding a lcm");
    scanf("%d %d",&x,&y);
    for(i=x<y?x:y;i>0;i--)
    {
        if(x%i==0 && y%i==0)
        {
            printf("this is hcf  %d",i);
            break;
        }

    }
}