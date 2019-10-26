#include <bits/stdc++.h>

using namespace std;

class node
{
public:
    int data;
    node* next;
    node(int d)
    {
        data=d;
        next=NULL;
    }
};
void InsertAtTail(node* &head,node* &tail,int data)
{
    if(head==NULL)
    {
        node* n=new node(data);
        head=tail=n;

    }
    else
    {
        node* n=new node(data);
        tail->next=n;
        tail=n;
    }
}
void InputData(node*&head,node*&tail,int n)
{
    int data;
    while(n--)
    {
        cin>>data;
        InsertAtTail(head,tail,data);


    }

}

void removeDuplicates(node* head)
{
    /* Pointer to traverse the linked list */
    node* current = head;

    /* Pointer to store the next pointer of a node to be deleted*/
    node* next_next;

    /* do nothing if the list is empty */
    if (current == NULL)
    return;

    /* Traverse the list till last node */
    while (current->next != NULL)
    {
    /* Compare current node with next node */
    if (current->data == current->next->data)
    {
        /* The sequence of steps is important*/
        next_next = current->next->next;
        delete(current->next);
        current->next = next_next;
    }
    else /* This is tricky: only advance if no deletion */
    {
        current = current->next;
    }
    }
}

void print(node* head)
{
    while(head!=NULL)
    {
        cout<<head->data<<" ";
        head=head->next;
    }

}
int main()
{

    int t;
    cin>>t;
    while(t--)
    {
        node* head=NULL;
        node* tail=NULL;
        int n;
        cin>>n;
        InputData(head,tail,n);
        removeDuplicates(head);
        print(head);

    }
    return 0;
}
