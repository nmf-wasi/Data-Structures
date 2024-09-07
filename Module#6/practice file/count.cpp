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
void insert_at_tail( Node *&head, int value)
{
    Node *newNode = new Node(value);
    if(head==NULL)
    {
        head=newNode;
        return;
    }
    else
    {
        Node *temp =head;
        while(temp->next!=NULL)
        {
            temp=temp->next;
        }
        temp->next = newNode;
    }
}
int count_linked_list(Node *head)
{
    Node *temp = head;
    int count = 0;
    while(temp!=NULL)
    {
        count++;
        temp = temp->next;
    }
    return count;
}
int main()
{
    Node *head = NULL;
    int input;
    while(true)
    {
        cin>>input;
        if(input==-1)
        {
            break;
        }
        else
        {
            insert_at_tail( head, input);
        }
    }
    int count = count_linked_list(head);
    cout << count;
    return 0;
}