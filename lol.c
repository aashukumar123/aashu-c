#include<stdio.h>
void main()

{ 
      int i;
    int n;
    int postion;
    int element;
    int a[10];
    printf("enter a size of array");
    scanf("%d",&n);
    printf("enter a value");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);

    }
    printf("enter a postion of element");
    scanf("%d",&postion);
     printf("enter a element by the user");
    scanf("%d",&element);
    for(i=0;i<n;i++)
    printf("%d",a[i]);
    for(i=n;i>=postion-1;i--)
    {
    a[i]=a[i-1];
    }
    a[postion-1]=element;
    printf("\nafrer insert a element");
    for(i=0;i<n;i++)
    printf("%d",a[i]);
    if((postion-1)<n)
    {
        printf("\npostion is corrct");

    }
    else if((postion-1)>=n)
    {
        printf("\npostion is incoreect");

    }


}