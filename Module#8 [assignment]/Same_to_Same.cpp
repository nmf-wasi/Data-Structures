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
bool matching_function(Node* head_one, Node* head_two)
{
    Node* temp_one = head_one;
    Node* temp_two = head_two;
    while(temp_one!=NULL && temp_two!=NULL)
    {
        if(temp_one->value!=temp_two->value)
        {
            return false;
        }
        temp_one = temp_one->next;
        temp_two = temp_two->next;
    }
    if(temp_one == NULL && temp_two == NULL)
    {
        return true;
    }
    return false;
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
    int input_two;
    Node *head_two=NULL;
    Node *tail_two=NULL;
    while(true)
    {
        cin >> input_two;
        if(input_two==-1)
        {
            break;
        }
        else
        {
            insert_at_tail(head_two, tail_two, input_two);
        }
    }
    bool flag =matching_function(head_one,head_two);

    if(flag==true)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
    return 0;
}