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
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
    }
    else
    {
        tail->next = newNode;
        newNode->prev = tail;
        tail = newNode;
    }
}
bool palindrom(Node *head, Node *tail)
{
    Node *i = head;
    Node *j = tail;
    while (i != j)
    {
        if (i->value != j->value)
        {
            return false;
        }
        i = i->next;
        j = j->prev;
    }
    return true;
}
void print_it(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->value << " ";
        temp = temp->next;
    }
}
void sort_manually(Node *head, Node *tail)
{
    for (Node *i = head; i->next != NULL; i = i->next)
    {
        for (Node *j = i->next; j != NULL; j = j->next)
        {
            if (i->value > j->value)
            {
                swap(i->value, j->value);
            }
        }
    }
}
int main()
{
    int input_one;
    Node *head = NULL;
    Node *tail = NULL;
    while (true)
    {
        cin >> input_one;
        if (input_one == -1)
        {
            break;
        }
        else
        {
            insert_at_tail(head, tail, input_one);
        }
    }
    sort_manually(head, tail);
    print_it(head);
    return 0;
}