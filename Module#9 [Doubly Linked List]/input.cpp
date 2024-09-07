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
void insert_at_tail(Node *&head, Node *&tail, int value)
{
    Node *newNode = new Node(value);
    if (tail == NULL)
    {
        head == newNode;
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
    normal_print_doubly_linked_list(head);
    reverse_print_doubly_linked_list(tail);
    return 0;
}