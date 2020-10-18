int intersectPoint(Node* head1, Node* head2)
{
    Node* start1=head1;
    Node *start2=head2;
    int c1=0,c2=0;
    while(start1!=NULL)
    {
        c1++;
        start1=start1->next;
    }
     while(start2!=NULL)
    {
        c2++;
        start2=start2->next;
    }
    int diff=0;
    int val=0;
    start1=head1;
    start2=head2;
    if(c1>=c2)
    {
        diff=c1-c2;
        for(int i=1;i<=diff;i++)
    {
    start1=start1->next;   
    }
    while(start1!=NULL && start2!=NULL &&start1!=start2)
    {
        start1=start1->next;
        start2=start2->next;
    }
    if(start1!=NULL && start2!=NULL && start1==start2)
    {
        val=start1->data;
    }
    else
    {
        val=-1;
    }
        
    }
    else
    {
        diff=c2-c1;
        for(int i=1;i<=diff;i++)
    {
        start2=start2->next;
    }
    while(start1!=NULL && start2!=NULL &&start1!=start2)
    {
        start1=start1->next;
        start2=start2->next;
    }
    if(start1!=NULL && start2!=NULL && start1==start2)
    {
        val=start1->data;
    }
    else
    {
        val=-1;
    }
    }
    return val;
    
}