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
void reversing_doubly_linked_list(Node *&head, Node *cursor)
{
    if (cursor->next == NULL)
    {
        head = cursor;
        return;
    }
    else
    {
        reversing_singly_linked_list(head, cursor->next);
        cursor->next->next = cursor;
        cursor->next = NULL;
    }
}
int main()
{
    Node *head = new Node(10);
    Node *a = new Node(20);
    Node *b = new Node(30);
    Node *c = new Node(40);
    head->next = a;
    a->next = b;
    b->next = c;
    cout << "NORMAL PRINT = ";
    normal_print(head);
    cout << endl;
    cout << "NORMAL PRINT WITH FUNCTION= ";
    normal_print_with_function(head);
    cout << endl;
    cout << "REVERSE PRINT WITH FUNCTION= ";
    reverse_print_with_function(head);
    cout << endl;
    reversing_singly_linked_list(head, head);
    cout << "NORMAL PRINT AFTER REVERSING FUNCTION= ";
    normal_print(head);
    cout << endl;
    return 0;
}