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
void insert_at_head(Node *&head, Node *&tail, int value)
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
        newNode->next = head;
        head->prev = newNode;
        head = newNode;
        return;
    }
}
void insert_at_position(Node *head, int position, int value)
{
    Node *newNode = new Node(value);
    Node *temp = head;
    for (int i = 1; i <= position - 1; i++)
    {
        temp = temp->next;
    }
    newNode->next = temp->next;
    temp->next = newNode;
    newNode->next->prev = newNode;
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
        insert_at_head(head, tail, value);
    }
    else if (position == size)
    {
        insert_at_tail(head, tail, value);
    }
    else if (position < size)
    {
        insert_at_position(head, position, value);
    }
    normal_print_doubly_linked_list(head);
    cout << endl
         << endl
         << endl;
    reverse_print_doubly_linked_list(tail);
    return 0;
}