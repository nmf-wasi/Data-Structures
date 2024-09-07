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

int size_of_linked_list(Node *head)
{
    Node *tmp = head;
    int count = 0;
    while (tmp != NULL)
    {
        count++;
        tmp = tmp->next;
    }
    return count;
    }
void insert_at_head(Node *&head, int value)
    {
        Node *newNode = new Node(value);
        newNode->next = head;
        head = newNode;
    }
void insert_at_any_position(Node *head,int position, int value)
    {
        Node *newNode = new Node(value);
        Node *temp = head;
        for (int i = 1; i < position - 1;i++)
        {
            temp = temp->next;
        }
        newNode->next = temp->next;
        temp->next = newNode;
    }
void insert_at_tail(Node *&head, Node *&tail,int value)
    {
        Node *newNode = new Node(value);
        if(head==NULL)
        {
            head = newNode;
            tail = newNode;
            return;
        }
        else
        {
            tail->next = newNode;
            tail = newNode;
        }
    }

void delete_head(Node *&head)
    {
        Node *deleteHead = head;
        head = head->next;
        delete deleteHead;
    }
void delete_from_any_position(Node *head, int position)
    {
        Node*temp=head;
        for(int i=1;i<position-1;i++)
        {
            temp=temp->next;
        }
        Node *deleteNode=temp->next;
        temp->next=temp->next->next;
        delete deleteNode;
    }
int main()
{
    int input;
    Node *head = NULL;
    Node *tail = NULL;
    while(true)
    {
        cin >> input;
        if(input==-1)
        {
            break;
        }
        else
        {
            insert_at_tail(head,tail,input);
        }
    }
    int delete_position;
    cin >> delete_position;
    
    if(delete_position>=size_of_linked_list(head))
    {
        cout << "Invalid Value" << endl;
    }
    else if(delete_position==0)
    {
        delete_head(head);
    }
    else
    {
        delete_from_any_position(head, delete_position);
    }
    return 0;
}