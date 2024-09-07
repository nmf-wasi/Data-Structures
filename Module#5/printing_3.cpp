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
int main()
{
    Node *Head = new Node(10); // first node is called head
    // head is here now a pointer which has a datatype of Node and it's dynamic object
    Node *a = new Node(20);
    Node *b = new Node(30);
    Node *c = new Node(40);
    Node *d = new Node(50);
    Node *e = new Node(60);
    Head->next = a;
    a->next = b;
    b->next = c;
    c->next = d;
    d->next = e;
    Node *temp = Head;
    while (temp != NULL)
    {
        cout << temp->value << endl;
        temp = temp->next;
    }
    temp = Head;
    while (temp != NULL)
    {
        cout << temp->value << endl;
        temp = temp->next;
    }
    return 0;
}