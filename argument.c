add(int x,int y)
{
    int c;
    c=x+y;
    printf("resul is %d:",c);

}
#include<stdio.h>
void main()
{
    int a;
    int b;
    printf("enter a number");
    scanf("%d%d",&a,&b);
    add(a,b);
}