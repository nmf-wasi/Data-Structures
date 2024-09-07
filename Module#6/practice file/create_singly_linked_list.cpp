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
void insert_at_tail(Node *&head, int value)
{
    Node *newNode = new Node(value);
    if(head==NULL)
    {
        head=newNode;
        return;
    }
    else
    {
        Node *temp = head;
        while(temp->next !=NULL)
        {
            temp = temp->next;
        }
        temp->next = newNode;
    }
}
void print_list(Node *head)
{
    Node *temp =head;
    while(temp!=NULL)
    {
        cout << temp->value << " ";
        temp = temp->next;
    }
}
int main()
{
        int input;
        Node *head = NULL;
        while(true)
        {
            cin >> input;
            if(input==-1)
            {
                break;
            }
            else
            {
                insert_at_tail(head, input);
            }
        }
        print_list(head);

        return 0;
}