struct node
{
    int data;
    struct node* next;
    
};
 struct node *start =0;
struct node *createnode()
{
     struct node *k;
k= (struct node*)malloc(sizeof(struct node));
  printf("enter a data");
  scanf("%d",&k->data);
   k->next=0;
   return k;
}
 void insertionstart()
 {
    struct node *j;
    
    j=createnode();
    if(start==0)
    {
          start=j;
    }
    else
     {
        j->next=start;
        start=j;
    }



}
void deletion ()
{
    struct node *j;
    if(start==0)
    {
        printf("we cant delet any node");
    }
    else
    {
         j=start;
        start =start->next;
        j->next=0;
        free(j);
        printf("deletion sucessfully");

    }

}
void display()
{  struct node *l;
    l=start;
    while(l!=0)
{
    printf("%d ",l->data);
     l=l->next;
}
}
void insertend()
{   struct node *z,*y;
    
    z=createnode();

    if(start==0)
    {
        start=z;
    }
    else{  
          y=start;
       while(y->next!=0)
       {
        y=y->next;
       }
       y->next=z;
       z=0;
       y=0;


    }
}
void deletionend()
{ struct node *l,*p;
    if(start==0)
    {
        printf("we cant delete any node");
    }
    else
    {
        l=start;
        while(l->next->next!=0)
        {
            l=l->next;
        }
         p=l->next;
         l->next=0;
         free(p);
         printf("deletionend successfully");
    }
}




void main()
{
    int ch;
    printf("press 1, insertion");
    printf("\npress 2, deletion ");
    printf("\npress 3, display");
    printf("\npress 4, insertend");
    printf("\n press 5,deletionend");
    printf("\npress 6,exit");
    while(1)
    {
    
    printf("\nenter a choice by the user ");
    scanf("%d",&ch);
    switch(ch)
    {
        case 1:
        {
            insertionstart();
            
            break;
        }
        case 2:
        {
           deletion();
           break;
            
        }
        case 3:
        {
          display();
          break;
        }
        case 4:
        {
            insertend();
            break;
            

        }
        case 5:
        {
            deletionend();
            break;
        }
        case 6:
        {
            exit(0);
        }
    }
    }
       

}