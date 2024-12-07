#include<stdio.h>
void main()
{
    int a=-1;
    int b=1;
    int n;
    int i;
    int c;
    printf("enter a range of fabocci series");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
         c=a+b;
        printf("%d",c);
        a=b;
        b=c;
       
        
        
  }

}