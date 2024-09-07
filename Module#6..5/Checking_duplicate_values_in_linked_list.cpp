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
        head = newNode;
        return;
    }
    else
    {
        Node *temp = head;
        while(temp->next!=NULL)
        {
            temp = temp->next;
        }
        temp->next = newNode;
    }
}
bool check_duplicate(Node * head)
{
    bool flag = false;
    Node *temp_1 = head;
    while(temp_1!=NULL)
    {

        Node *temp_2 = temp_1->next;
        while(temp_2!=NULL)
        {
            if(temp_1->value==temp_2->value)
            {
                return true;
            }
            else
            {
                temp_2 = temp_2->next;
            }
        }
        temp_1 = temp_1->next;
    }
    return false;
}
int main()
{
    int input;
    Node *head = NULL;
    while(true)
    {
        cin>>input;
        if(input==-1)
        {
            break;
        }
        else
        {
            insert_at_tail(head, input);
        }
    }
    bool flag = check_duplicate(head);
    if(flag==true)
    {
        cout << "YES";
    }
    else if(flag==false)
    {
        cout << "NO";
    }
    return 0
}