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
void print_it(Node *head)
{
    Node *temp = head;
    while(temp!=NULL)
    {
        cout << temp->value<< " ";
        temp=temp->next;
    }
}
void reverse_it(Node *head, Node *tail)
{
    Node *i = head;
    Node *j = tail;
    while (i != j && i->next != j)
    {
        swap(i->value, j->value);
        i = i->next;
        j = j->prev;
    }
    swap(i->value, j->value);
}
int size_of_linked_list(Node *head)
{
    int count = 0;
    Node *temp = head;
    while(temp!=NULL)
    {
        count++;
        temp = temp->next;
    }
    return count;
}
void insert_at_head (Node* &head, Node *&tail, int value)
{
    Node *newNode = new Node(value);
    if(head==NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    else
    {
        newNode->next = head;
        head->prev = newNode;
        head = newNode;
        return;
    }
}
void insert_at_position(Node *&head, Node *&tail, int position, int value)
{

    Node *newNode = new Node(value);
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    else
    {
        Node *temp = head;
        for (int i = 1; i < position - 1;i++)
        {
            temp = temp->next;
        }
        newNode->next = temp->next;
        temp->next->prev=newNode;
        temp->next = newNode;
        newNode->prev = temp;
    }
}
void insert_at_tail(Node *&head, Node *&tail, int value)
{
    Node *newNode = new Node(value);
    if(head==NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    else
    {
        tail->next = newNode;
        newNode->prev = tail;
        tail = newNode;
        return;
    }
}
int main()
{
    int querry;
    cin >> querry;
    Node *head = NULL;
    Node *tail = NULL;
    while (querry--)
    {

        int size = size_of_linked_list(head);
        int position,value;
        cin >> position >> value;
        if (position >= size)
        {
            cout << "Invalid<<endl";
        }
        else if (position = 0)
        {
            insert_at_head(head, tail, position);
        }
        else if(position=size-1)
        {
            insert_at_tail(head, tail, position);
        }
        else if (position < size)
        {
            insert_at_position(head, tail, position, value);
        }
        print_it(head);
        reverse_it(head,tail);
        print_it(head);
    }
    return 0;
}