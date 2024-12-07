#include<stdio.h>
void main()
{
    float pie;
    int r;
    float Area;
    printf("enter a value of pie:");
    
    scanf("%f",&pie);
    printf("enter a value of r:");
    scanf("%d",&r);
    Area=pie*r*r;
    printf("Area of circle : %f",Area);

}