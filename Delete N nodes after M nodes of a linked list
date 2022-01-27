/*  
    Time Complexity : O(L)
    Space Complexity : O(1)
    
    Where 'L' is number of Nodes in Linked-List.
*/

Node *getListAfterDeleteOperation(Node *head, int n, int m)
{
    int cnt;
    Node *cur, *rem, *tem;
    cur = head;

    while (cur != NULL)
    {
        // Skip 'M' Nodes.
        cnt = m - 1;
        while ((cnt--) && (cur != NULL))
        {
            cur = cur->next;
        }

        if (cur == NULL)
            return head;

        // Remove 'N' Nodes.
        rem = cur->next;
        cnt = n;
        while ((cnt--) && (rem != NULL))
        {
            Node *tem = rem;
            rem = rem->next;
            delete tem;
        }

        // Link Remaining part of Linked List.
        cur->next = rem;
        cur = rem;
    }

    return head;
}
