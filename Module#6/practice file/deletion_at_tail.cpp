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
void insert_at_Tail(Node *&head, int value)
{
    Node *newNode = new Node(value);
    if(head==NULL)
    {
        head = newNode;
        return;
    }
    else
    {
        Node*temp = head;
        while(temp->next!=NULL)
        {
            temp = temp->next;
        }
        temp->next = newNode;
    }
}
void delete_at_tail(Node *&head) {
    if (head == NULL) return;  // List is empty
    if (head->next == NULL) {  // List has only one node
        delete head;
        head = NULL;
        return;
    }
    Node *temp = head;
    while (temp->next->next != NULL) {
        temp = temp->next;
    }
    delete temp->next;
    temp->next = NULL;
}

void print_linked_list(Node * head)
{
    Node *temp = head;
    while(temp!=NULL)
    {
        cout<<temp->value<<endl;
        temp = temp->next;
    }
}
int main()
{
    int input;
    Node *head= NULL;
    while(true)
    {
        cin>>input;
        if(input==-1)
        {
            break;
        }
        else
        {
            insert_at_Tail(head, input);
        }
    }

    print_linked_list(head);
    delete_at_tail(head);
    print_linked_list(head);
    return 0;
}