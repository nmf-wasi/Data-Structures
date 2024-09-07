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
        Node *temp=head;
        int count=0;
        while(temp!=NULL)
        {
            count++;
            temp = temp->next;
        }
        return count;
    }
void insert_at_head(Node *&head, int value)
    {
        Node *newNode=new Node(value);
        newNode->next = head;
        head = newNode;
    }
void insert_at_postion(Node *head, int position, int value)
    {
        Node*newNode = new Node(value);
        Node*temp = head;
        for (int i = 1; i < position - 1;i++)
        {
            temp = temp->next;
        }
        // temp=pos-1;
        newNode->next=temp->next;
        temp->next = newNode;
    }
void insert_at_tail(Node *&head, Node *&tail, int input) // O(1)
    {
        Node *newNode = new Node(input);
        if (head == NULL)
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
void print_linked_list(Node *head)
    {
        Node *tmp = head;
        while (tmp != NULL)
        {
            cout << tmp->value <<endl;
            tmp = tmp->next;
        }
    }
int main()
{
    int input;
    Node *head=NULL;
    Node *tail=NULL;
    while(true)
    {
        cin>>input;
        if(input==-1)
        {
            break;
        }
        else
        {
            insert_at_tail(head,tail,input);
        }
    }
    print_linked_list(head);
    int position, value;
    cin >> position >> value;
    if(position>size_of_linked_list(head))
    {
        cout << "Invalid Index" << endl;
    }
    else if(position==0)
    {
        insert_at_head(head,value);
    }
    else if(position==size_of_linked_list(head))
    {
        insert_at_tail(head, tail, value);
    }
    else
    {
        insert_at_postion(head, position, value);
    }
    print_linked_list(head);
    return 0;
}