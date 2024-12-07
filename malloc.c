#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *x,*g;
    x=(int*)malloc(sizeof(int));
    *x=56;
    printf("print malloc resul %d\n",*x);
     g=(int*)calloc(6,sizeof(int));
    // *g=22;
     *(g+0)=20;
     *(g+1)=90;
     *(g+2)=67;
     printf("%d %d %d  ",*(g+0),*(g+1),*(g+2));
     g=(int*)realloc(g,9);
     *(g+8)=98;
     printf("%d",*(g+8));
     free(x);
     return 0;
     
}