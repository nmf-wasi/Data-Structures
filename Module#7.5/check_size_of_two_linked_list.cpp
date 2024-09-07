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
void insert_at_linked_list(Node *&head, Node *&tail, int value)
{
    Node *newNode = new Node(value);
    if(head==NULL)
    {
        head=newNode;
        tail=newNode;
    }
    else
    {
        tail->next=newNode;
        tail = newNode;
    }
}
int main()
{
    int input_one;
    int count_one=0;
    Node *head=NULL;
    Node *tail=NULL;
    while(true)
    {
        cin>>input_one;
        count_one++;
        if(count_one==-1)
        {
            break;
        }
        insert_at_linked_list(head, tail, input_one);
    }

    int input_two;
    int count_two = 0;
    while(true)
    {
        cin>>input_two;
        count_two++;
        if (input_two == -1)
        {
            break;
        }
        insert_at_linked_list(head, tail, input_two);
    }
    if(count_one==count_two)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
    return 0;
}