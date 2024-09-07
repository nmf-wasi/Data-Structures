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
void reverse_print(Node *head)
{
    if (head == NULL)
        return;
    Node *temp = head;
    reverse_print(temp->next);
    cout << temp->value << " ";
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
    reverse_print(head);
    return 0;
}