#include<stdio.h>
void main()
{
    int a[70];
    int i,n;
    printf("write a table of 10");
    scanf("%d",&n);
    for(i=1;i<10;i++)
{
    a[i]=n*i;
    printf("%d\n",a[i]);

}

}