#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int value;
    Node *next;
    Node *prev;

    Node(int value)
    {
        this->value = value;
        this->next = NULL;
        this->prev = NULL;
    }
};
void insert_at_head(Node*&head, Node *&tail, int value)
{
    Node *newNode = new Node(value);
    if(head==NULL)
    {
        head=newNode;
        tail=newNode;
    }
    else
    {
        newNode->next = head;
        head->prev=newNode;
        head = newNode;
    }
}

void insert_at_position(Node *&head, int position, int value)
{
    Node *newNode = new Node(value);
    Node *temp = head;
    for (int i = 1; i <= position - 1;i++)
    {
        temp = temp->next;
    }
    newNode->next=temp->next;
    temp->next = newNode;
    if(newNode->next!=NULL)
    {
      newNode->next->prev=newNode;
    }
    newNode->prev = temp;
}
void insert_at_tail(Node *&head, Node *&tail, int value)
{
    Node *newNode = new Node(value);
    if (tail == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    else
    {
        tail->next = newNode;
        newNode->prev = tail;
        tail = tail->next;
        return;
    }
}
int size(Node*head)
{
    int count=0;
    Node*temp=head;
    while(temp!=NULL)
    {
        count++;
        temp=temp->next;
    }
    return count;
}
void print_straight(Node *head)
{
    Node*temp=head;
    while(temp!=NULL)
    {
        cout<<temp->value<<" ";
        temp = temp->next;
    }
}
void print_reverse(Node*tail)
{
    Node*temp=tail;
    while(temp!=NULL)
    {
        cout << temp->value << " ";
        temp = temp->prev;
    }
}
int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    int querry;
    cin>>querry;
    for (int q = 1; q <= querry;q++)
    {
        int position,value;
        cin>>position>>value;
        int sz = size(head);

        if (head == NULL && position != 0)
        {
            cout << "Invalid" << endl;
            continue;
        }
        else if (position == 0)
        {
            insert_at_head(head, tail, value);
            cout << "L -> ";
            print_straight(head);
            cout << endl;
            cout << "R -> ";
            print_reverse(tail);
            cout << endl;
        }
        else if (position > sz)
        {
            cout << "Invalid" << endl;
        }
        else if(position==0)
        {
            insert_at_head(head, tail, value);
            cout << "L -> ";
            print_straight(head);
            cout << endl;
            cout << "R -> ";
            print_reverse(tail);
            cout << endl;
        }
        else if(position==sz)
        {
            insert_at_tail(head, tail, value);
            cout << "L -> ";
            print_straight(head);
            cout << endl;
            cout << "R -> ";
            print_reverse(tail);
            cout << endl;
        }
        else if(position<sz)
        {
            insert_at_position(head, position, value);
            cout << "L -> ";
            print_straight(head);
            cout << endl;
            cout << "R -> ";
            print_reverse(tail);
            cout << endl;
        }
    }
    
    return 0;
}