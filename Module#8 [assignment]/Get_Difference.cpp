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
        tail = newNode;
    }
}
int maximum_value_from_linked_list(Node *head)
{
    Node *temp = head;
    if (head->next == NULL)
    {
        return 0;
    }
    int max = INT_MIN;
    while (temp != NULL)
    {
        if (temp->value > max)
        {
            max = temp->value;
        }

        temp = temp->next;
    }
    return max;
}

int minimum_value_from_linked_list(Node *head)
{
    if (head->next == NULL)
    {
        return 0;
    }
    Node *temp = head;
    int min = INT_MAX;
    while (temp != NULL)
    {
        if (temp->value < min)
        {
            min = temp->value;
        }

        temp = temp->next;
    }
    return min;
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
        {
            break;
        }
        else
        {
            insert_at_tail(head, tail, input);
        }
    }
    int difference = maximum_value_from_linked_list(head) - minimum_value_from_linked_list(head);
    cout << difference;
    return 0;
}