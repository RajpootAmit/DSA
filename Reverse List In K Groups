Node* kReverse(Node* head, int k) {
    // Write your code here.
    if(head==NULL)
    {
        return NULL;
    }
int count=0;
    Node* curr=head,*p=NULL,*n=NULL;
    while(curr!=NULL && count<k)
    {
        n=curr->next;
        curr->next=p;
        p=curr;
        curr=n;
        count++;
    }
    if(n!=NULL)
    {
        head->next=kReverse(n,k);
    }
    return p;
}
