#include<stdio.h>
void main()
{

    int i,temp,j,a[7];
    printf("enter a value");
    for(i=0;i<7;i++)
    {
     scanf("%d",&a[i]);
    }
    for(j=0;j<7;j++)
    {
    for(i=0;i<6;i++)
    {
        
        if(a[i]>a[i+1])
        {
            temp=a[i];
            a[i]=a[i+1];
            a[i+1]=temp;

        }
    }
    }
    printf("after sorting\n");
    for(i=0;i<7;i++)
    {
    printf("%d ",a[i]);
    }
    

}