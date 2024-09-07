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
void insert_at_head(Node *&head , int value)
{
    Node *newHead = new Node(value);
    newHead->next=head;
    head = newHead;
}
void print_linked_list( Node *head)
{
    Node *temp = head;
    while(temp!=NULL)
    {
        cout << temp->value << " ";
        temp = temp->next;
    }
}
int main()
{
    int input;
    Node *head =NULL;
    while(true)
    {
        cin>>input;
        if(input==-1)
        {
            break;
        }
        else
        {
            insert_at_head(head,input);
        }
    }
    print_linked_list(head);
    return 0;
}