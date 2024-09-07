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
void normal_print(Node *head)
{
    Node *tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->value << " ";
        tmp = tmp->next;
    }
    cout << endl;
}
void normal_print_with_function(Node *cursor)
{
    if (cursor == NULL)
    {
        return;
    }
    else
    {
        cout << cursor->value << " ";
        normal_print_with_function(cursor->next);
    }
}
void reverse_print_with_function(Node *cursor)
{
    if (cursor == NULL)
    {
        return;
    }
    else
    {
        reverse_print_with_function(cursor->next);
        cout << cursor->value << " ";
    }
}
void reversing_doubly_linked_list(Node *&head, Node *tail)
{
    Node *i=head;
    Node *j=tail;
    while( i!=j && i->next!=j)
    {
        swap(i->value,j->value);
        i=i->next;
        j = j->prev;
    }

    swap(i->value, j->value);
}
int main()
{
    Node *head = new Node(10);
    Node *a = new Node(20);    
    Node *b = new Node(30);
    Node *c = new Node(40);    
    Node *d = new Node(50);
    head->next=a;
    a->next=b;
    c->next = d;
    a->prev = b;
    b->next = c;
    c->next = d;
    Node *tail = d;
    cout << "NORMAL PRINT = ";
    normal_print(head);
    cout << endl;
    cout << "NORMAL PRINT WITH FUNCTION= ";
    normal_print_with_function(head);
    cout << endl;
    cout << "REVERSE PRINT WITH FUNCTION= ";
    reverse_print_with_function(head);
    cout << endl;
    reversing_doubly_linked_list(head, tail);
    cout << "NORMAL PRINT AFTER REVERSING FUNCTION= ";
    normal_print(head);
    cout << endl;
    return 0;
}
