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
void normal_print_doubly_linked_list(Node *head)
{
    Node *temp = head;
    while(temp!=NULL)
    {
        cout << temp->value << endl;
        temp = temp->next;
    }
}
void reverse_print_doubly_linked_list(Node *tail)
{
    Node *temp= tail;
    while(temp!=NULL)
    {
        cout << temp->value << endl;
        temp = temp->prev;
    }
}
int main()
{
    Node *head = new Node(10);
    Node *a = new Node(20);
    Node *b = new Node(30);
    Node *tail = b;
    head->next = a;
    a->next=b;
    a->prev = head;
    b->prev = a;
    //since onstructor already had NULL while construction those nodes, we dont have to provide NULL at the edning
    normal_print_doubly_linked_list(head);
    reverse_print_doubly_linked_list(tail);
    return 0;
}