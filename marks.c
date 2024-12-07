#include<stdio.h>
int main()
{
    int maths,physics,english,hindi,goal;
    int sum;
    float percentage;
    
     
     printf("marks of sunject");
     scanf(" %d %d %d %d %d ",&maths,&physics,&english,&hindi,&goal);
     sum = maths+physics+ english + hindi + goal;
     printf("sum of marks %d",sum);
     percentage=(sum/500)*100;
     

     
     printf("the percentage of all subject %.2f",percentage);
     

}