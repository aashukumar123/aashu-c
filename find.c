#include<stdio.h>
void main()
{
    int ch,x,y,z;
    printf("no. of case");
    scanf("%d",&ch);
    switch (ch)
    {
        case 1:
        {
            printf(" enter value of x and y");
            scanf("%d %d",&x,&y);
            z=x+y;
            printf(" addtion of two value is %d",z);
            break;
        }
        case 2:
        {
           printf(" enter value of x and y");
            scanf("%d %d",&x,&y);
            z=x-y;
            printf(" subtraction of two value is %d",z); 
            break;
        }
        case 3:
        
        {
            printf(" enter value of x and y");
            scanf("%d %d",&x,&y);
            z=x*y;
            printf(" multiplication of two value is %d",z);
            break;
            
        }
        default : 
        {
            printf("if value is wrong");

        }


    }

}
    

