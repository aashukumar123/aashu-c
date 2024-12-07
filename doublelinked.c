struct node

{
    int data;
    struct node *next;
    struct node *prev;

};
struct node *start=0;
 struct node *createnode()
{
    struct node *k;
    k=(struct node*)malloc(sizeof(struct node));
    printf("enter data");
    scanf("%d",&k->data);
    k->next=0;
    k->prev=0;
    return k;
}
 void insertion()
 {
    struct node *l;
    l=createnode();
    if(start==0)
    {
        start=l;
    }
    else
    {
         l->next=start;
        
        start->prev=l;
        start=l;
        
    }

 }
  void display()
  {
    struct node *p;
    p=start;
    
    while(p!=0)
    {
        printf("%d ",p->data);
        p=p->next;
    }
  }
  void deletion()
  {
  struct node *z;
  

    if(start==0)
    {
        printf(" no node will nw deleted");

    }
    else
    {
        z=start;
        start=start->next;
        z->next=0;
        start->prev=0;
        z->prev=0;
        free(z);
        printf("deletion successfully");
    }

  }
 void  insertionend()
  {//wrong
    struct node *t,*r;
    t=createnode();
    if(start==0)
    {
        start=t;
    }
    else
    {
        t=start;
        while(t->next!=0)
        {
            t=t->next;
        }
        t->next=start;
        r->prev=start;
        r->next=0;
        t=0;
        r=0;
        



    }


  }
  
void main()

{
    int ch;
    printf("press 1,insertion");
    printf("\npress 2,deletion");
    printf("\npress 3,display");
    printf("\npress 4,insertion end");
    printf("\npress 5,exit");
  while(1)

  {
   printf("\nenter value by the user");
   scanf("%d",&ch);
   switch(ch)
   {
    case 1:

    {
        insertion();
        
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
        insertionend();
        break;
    }
    case 5:
    {
        exit(0);
    }
   }
  }

}
