#include <bits/stdc++.h>
using namespace std;
    class Node
    {
    public:
        int value;
        Node *next;
    
        Node(int value)
        {
            this->value = value;
            this->next = NULL;
        }
    };
void insert_at_tail(Node *&head,Node *&tail,int value)
{
    Node* newNode=new Node(value);
    if(head==NULL)
    {
        head=newNode;
        tail=newNode;
    }
    else
    {
        tail->next=newNode;
        tail=newNode;
    }
}
void sort(Node*head)
{
    for(Node *i=head;i->next!=NULL;i=i->next)
    {
        for (Node *j = i->next; j != NULL;j=j->next)
        {
            if(i->value>j->value)
            {
                swap(i->value, j->value);
            }
        }
    }
}
void duplicate_node(Node*head)
{
    Node *i = head;
    while (i != NULL && i->next!=NULL)
    {
        if (i->value == i->next->value)
        {
            Node *temp = i->next;
            i->next = i->next->next;
            delete temp;
        }
        else
        {
            i = i->next;
        }
    }
}
void print(Node*head)
{
    Node*temp=head;
    while(temp!=NULL)
    {
        cout << temp->value << " ";
        temp = temp->next;
    }
}
int main()
{
    Node*head=NULL;
    Node*tail=NULL;
    int input;
    while(true)
    {
        cin>>input;
        if(input==-1)
        {
            break;
        }
        else
        {
            insert_at_tail(head,tail,input);
        }
    }
    sort(head);
    duplicate_node(head);
    print(head);
    return 0;
}