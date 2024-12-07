#include<stdio.h>
void main()
{
    int a[10],L=0,R=9,i,b,m;
    printf("enter a value");
    for(i=0;i<10;i++)
    {
        scanf("%d",&a[i]);

    }
    printf("enter a which you want you search ");
    scanf("%d",&b);
    while(L<=R)
    {
    m=(L+R)/2;
    if(a[m]==b)
    {
        printf("then value is found %d",m+1);
        break;
    }
     else if(a[m]>b)
    {
        R=m-1;

    }
    else if (a[m]<b)
    {
        L=m+1;
    }


}
if(a[m]!=b)
{

    printf("then the binary number not found");
}
}