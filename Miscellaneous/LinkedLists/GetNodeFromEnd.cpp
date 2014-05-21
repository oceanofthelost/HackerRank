/*
  Get Nth element from the end in a linked list of integers
  Number of elements in the list will always be greater than N.
*/

//Node is defined as 
struct Node
{
    int data;
    struct Node *next;
};

int GetNode(Node *head,int positionFromTail)
{
    Node *findSize=head;
    unsigned int size=0;

    while(findSize != NULL)
    {
        size++;
        findSize=findSize->next;
    }

    size-=positionFromTail;
    while(size>0)
    {
        head->next;
        size--;
    }
    
    return head->data;
}
