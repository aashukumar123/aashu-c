struct node
{
    int data;
    struct node*next;

};
struct node *head;
 void  Reverselinkedlist()
{
    
    struct node *r,*q,*p;
        r=0;
        q=head;
        p=head->next;
    while(p!=0)
    {
        q->next=r;
        r=q;
        q=p;
        p=p->next;


    }
    q->next=r;
    head=q;


}
void main()

{
  Reverselinkedlist();
}

