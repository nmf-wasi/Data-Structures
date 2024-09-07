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
        head = newNode;
        tail = newNode;
    }
    else
    {
        tail->next = newNode;
        tail = newNode;
    }
}
void check_duplicate(Node *head)
{
    Node *Lia = head;
    while (Lia != NULL && Lia->next != NULL)
    {
        Node *Yuna = Lia;
        while (Yuna->next != NULL)
        {
            if (Lia->value == Yuna->next->value)
            {
                Node *deleteNode = Yuna->next;
                Yuna->next = Yuna->next->next;
                delete deleteNode;
            }
            else
            {
                Yuna = Yuna->next;
            }
        }
        Lia = Lia->next;
    }
}
void print_linked_list(Node *head)
{
    Node *temp=head;
    while(temp!=NULL)
    {
        cout << temp->value << " ";
        temp = temp->next;
    }
}
int main()
{
    int input_one;
    Node *head_one=NULL;
    Node *tail_one=NULL;
    while(true)
    {
        cin >> input_one;
        if(input_one==-1)
        {
            break;
        }
        else
        {
            insert_at_tail(head_one, tail_one, input_one);
        }
    }
    check_duplicate(head_one);
    print_linked_list(head_one);
    return 0;
}