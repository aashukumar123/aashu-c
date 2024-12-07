#include<stdio.h>
void main()
{
    int x,s=1,i;

printf("enter a value");
scanf("%d",&x);
for(i=1;i<x;i++)

{
    s=s*i;
}
printf("factorial of number is %d",s);


}