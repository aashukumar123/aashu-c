#include<stdio.h>
void main()
{
    int x,p,s=0,y;
  printf("enter a armstrong number");
  scanf("%d",&x);
  y=x;
  while(y!=0)
  {
   p=y%10;
   s=s+(p*p*p);
   y= y/10;
  }
  if(x==s)
  {
    printf("this is a armstrong number");

  }
  else
  {
    printf("this is not a armstrong number");

  }
}