LinkedListNode<int> *reverseLinkedList(LinkedListNode<int> *head) 
{
    // Write your code here
  if(head==NULL)
        return NULL;
    LinkedListNode<int>* p=NULL,*c=head,*n=head->next;
    // p is the previous pointer which will be pointing to NULL.
    //c is the current pointer pointing to the head of the list.
    // n is the next pointer pointing to the next of the current pointer.
    while(c!=NULL)
    {
        c->next=p;   // break the link and point the next to the null part.
        p=c;         // move the previous pointer forward.
        c=n;         // move the current pointer.
        if(n!=NULL)   // checker for the safer side.
        {
             n=n->next;
          }
           
    }
    return p;
}
