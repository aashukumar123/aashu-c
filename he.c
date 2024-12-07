#include<stdio.h>
int main()
{
   
    int i,n,j,temp; 
    int a[100];

  printf("how much array number inserted");
  scanf("%d",&n);
  printf("enter a number from user");
  for(i=0;i<=n;i++)
  {
    scanf("%d",&a[i]);
  }

  for(i=0;i<n-1;i++)
  {
    for(j=0;j<n-1-i;j++)
    {
        if(a[j]>a[j+1])
        {
            temp=a[j];
            a[j]=a[j+1];
            a[j+1]=temp;
        }
    }
  }
  printf("sorting number");
  for(i=0;i<n;i++)
  {
  printf("%d",a[i]);
  }

}