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
    if(head==NULL)
    {
        head=newNode;
        tail=newNode;
    }
    else
    {
        tail->next = newNode;
        tail = newNode;
    }
}
void print_middle_value(Node *head)
{
    Node *temp = head;
    int size= size_of(head);
    if (size %2 !=0)
    {
        for (int i = 1; i < (size / 2) + 1;i++)
        {
            temp = temp->next;
        }
        cout << temp->value;
    }
    else
    {
        for (int i = 1; i < (size / 2) + 1; i++)
        {
            temp = temp->next;
        }
        cout << temp->value << " "<<temp->next->value;
    }
}
int size_of(Node *head)
{
    int count = 0;
    Node *temp=head;
    while(temp!=NULL)
    {
        count++;
        temp = temp->next;
    }
    return count;
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
            insert_at_tail(head, tail,input);
        }
    }
    print_middle_value(head);

    return 0;
}