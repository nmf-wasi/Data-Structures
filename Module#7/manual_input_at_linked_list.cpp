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
void print_linked_list(Node *head)
{
    Node*temp = head;
    while(temp!=NULL)
    {
        cout << temp->value << endl;
        temp = temp->next;
    }
}
int main()
{
    Node *head =new Node(10);
    Node *a =new Node(10);
    Node *b =new Node(10);
    Node *c =new Node(10);
    Node *d =new Node(10);
    head->next = a;
    a->next = b;
    b->next = c;
    c->next = d;
    //previous_name->next=next_name
    print_linked_list(head);
    return 0;
}