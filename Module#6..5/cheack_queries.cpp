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
void insert_at_head(Node *&head, int value)
{
    Node *newNode = new Node(value);
    newNode->next=head;
    head = newNode;
}
void insert_at_random_point(Node &head, int pos, int val)
{
    Node *newNode = new Node(val);
    Node *temp = head;
    for (int i = 1; i < pos - 1;i++)
    {
        temp = temp->next;
    }
    newNode->next = temp->next->next;
    temp->next = newNode;
}
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
int size_of_linked_list(Node *head)
{
    int count = 0;
    Node *temp = head;
    while (temp != NULL)
    {
        count++;
        temp = temp->next;
    }
    return count;
}
void print_linked_list(Node *head)
{
    Node *temp = head;
    while(temp!=NULL)
    {
        cout << temp->value << " ";
    }
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
    int querry;
    cin>>querry;
    for (int q = 1; q = querry ;q++)
    {
        int index, value;
        cin >> index >> value;
        if(index>size_of_linked_list(head))
        {
            cout << "Invalid";
        }
        
        else if (index == 0)
        {
            insert_at_head(head, value);
        }
        else if (index == size_of_linked_list(head))
        {
            insert_at_tail(head, tail, value);
        }
        else
        {
            insert_at_random_point(*head, index, value);
        }

        print_linked_list(head);
    }
    return 0;
}