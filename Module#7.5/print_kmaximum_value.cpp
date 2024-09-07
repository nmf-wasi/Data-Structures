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
void insert_in_linked_list(Node *&head, Node *&tail, int input)
{
    Node *newNode = new Node(input);
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
    }
    else
    {
        tail->next = newNode;
        tail = newNode;
    }
}
int size(Node *head)
{
    Node *temp = head;
    int count = 0;
    while (temp != NULL)
    {
        count++;
        temp = temp->next;
    }
    return count;
}
void print_maximum_index(Node *head)
{
    if(head==NULL)
    {
        cout << "INVALID";
    }
    int max = INT_MIN;
    for (Node *i = head; i->next != NULL;i=i->next)
    {
        if(i->value>max)
        {
            swap(i->value, max);
        }
    }
    cout << max;
}
int main()
{
    int input;
    Node *head = NULL;
    Node *tail = NULL;
    while (true)
    {
        cin >> input;
        if (input == -1)
            break;
        insert_in_linked_list(head, tail, input);
    }
    print_maximum_index(head);
    return 0;
}