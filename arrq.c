#include<stdio.h>
void main()
{
    int a[10],i,b;
    for(i=0;i<10;i++)
    {
    printf("enter a number by user");
    scanf("%d",&a[i]);
    }
    printf("enetr a value you want to delete");
    scanf("%d",&b);
    printf("show the value\n");
    for(i=0;i<10;i++)
    {
     printf("%d",a[i]);
    }
    for(i=0;i<10;i++)
    {
        if(a[i]==b)
        {
            printf("\nelemnt is found");
            break;

        }
    }
        if(a[i]!=b)
        {
            printf("\nelement is not found");

        }
        else
        {
            for(;i<9;i++)
            a[i]=a[i+1];

        }
        printf("\nupdate elemnt :");
        for(i=0;i<9;i++)
        printf("%d",a[i]);

    


}