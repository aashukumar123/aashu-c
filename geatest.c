#include<stdio.h>
int max_number(int a,int b,int c,int d)
{
   int max=a;
    if(b>max)
    {
     max=b;
    }
    
    if(c>max)
    {
    max=c;
    }
    if(d>max)
    {
    max=d;
    }
    return max;
}
int main()
{

    int a,b,c,d;
    scanf("%d %d %d %d ",&a,&b,&c,&d);
    
    int ans =max_number(a, b,c, d);
    printf("%d",ans);
}