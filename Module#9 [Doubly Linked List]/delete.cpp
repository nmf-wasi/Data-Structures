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
int size_of_doubly_linked_list(Node *head)
{
    int count = 0;
    Node *temp = head;
    while (temp != NULL)
    {
        count++;
        temp = temp->next;
    }
    return count;
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
void delete_head(Node *&head, Node *&tail)
{
    if (head == NULL)
    {
        tail = NULL;
        return;
    }
    else 
    {
        Node *deleteNode = head;
        head = head->next;
        head->prev = NULL;
        delete deleteNode;
    }
}
void delete_infrom_position( Node *head , int position)
{
    if(head==NULL)
    {
        return;
    }
    Node *temp=head;
    for(int i=1;i<position-1;i++)
    {
        temp = temp->next;
    }
    Node *deleteNode = temp->next;
    temp->next=temp->next->next;
    temp->next->prev = temp;
    delete deleteNode;
}
void delete_tail(Node *&head, Node *&tail)
{
    if (tail == NULL)
    {
        head = NULL;
        return;
    }
    Node *deleteNode=tail;
    tail = tail->prev;
    tail->next=NULL;
    delete deleteNode;
}
void normal_print_doubly_linked_list(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->value << endl;
        temp = temp->next;
    }
}
void reverse_print_doubly_linked_list(Node *tail)
{
    Node *temp = tail;
    while (temp != NULL)
    {
        cout << temp->value << endl;
        temp = temp->prev;
    }
}
int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    int input;
    while (true)
    {
        cin >> input;
        if (input == -1)
        {
            break;
        }
        else
        {
            insert_at_tail(head, tail, input);
        }
    }
    int position, value;
    cin >> position >> value;
    int size = size_of_doubly_linked_list(head);
    if (position > size)
    {
        cout << "INVALID" << endl;
    }
    else if (position == 0)
    {
        delete_head(head, tail, value);
    }
    else if (position == size)
    {
        delete_tail(head, tail, value);
    }
    else if (position < size)
    {
        delete_from_position(head, position, value);
    }
    normal_print_doubly_linked_list(head);
    cout << endl
         << endl
         << endl;
    reverse_print_doubly_linked_list(tail);
    return 0;
}