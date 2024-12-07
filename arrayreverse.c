#include <stdio.h>
int main()
{
   int n=6; 
    int a[7];
    int i;

    for(i=0;i<=n;i++)
    {
        scanf("%d",&a[i]);
    }
    
    for(i=n;i>=0;i--)
    {
printf("%d",a[i]);
    }
    
    
    
    return 0;
}