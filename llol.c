#include<stdio.h>
void main()
{
    int i,j,n;
    int a[100];
    int temp;
    printf("enter from user a number ");
    scanf("%d",&n);
    printf("no. of output");
    for(i=0;i<=n;i++)
    scanf("%d",&a[i]);
    for(i=0;i<=n-1;i++)
    {
      for(j=0;j<=n-1-i;j++)
        {
     if(a[j]>a[j+1])
     {
       temp=a[j];
       a[j]=a[j+1];
       a[j+1]=temp;

     }
        }
    }
    for(i=0;i<n;i++)
    printf("%d",a[i]);

}