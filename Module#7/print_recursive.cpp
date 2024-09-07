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
void reverse_print(Node *head)
    {
        if(head==NULL)
        {
            return;
        }
        Node *temp=head;
        reverse_print(temp->next);

        cout << temp->value << endl;
    }
void normal_print(Node *head)
    {
        if(head==NULL)
        {
            return;
        }
        Node *temp = head;
        cout << temp->value << endl;
        normal_print(temp->next);
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
    reverse_print(head);
    cout << endl;
    normal_print(head);
    return 0;
}