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
void insert_at_head(Node *&head, int value)
{
    Node *newNode = new Node(value);
    newNode->next = head;
    head = newNode;
}
void insert_at_tail(Node *&head, int value) 
{
    Node *newNode = new Node(value);
    if (head == NULL) 
    {
        head = newNode;
        return;
    }
    Node *temp = head;
    while (temp->next != NULL) 
    {
        temp = temp->next;
    }
    temp->next = newNode;
}
void delete_head(Node *&head)
{
    Node *temp = head;
    head = head->next;
    delete temp;
}

void delete_from_position(Node *&head, int position)
{
    if (head == NULL)
    {
        return;
    }
    if (position == 0)
    {
        delete_head(head);
        return;
    }
    Node *temp = head;
    for (int i = 0;  i < position - 1; i++)
    {
        if (temp == NULL)
        {
            break;
        }
        temp = temp->next;
    }
    if (temp == NULL || temp->next == NULL)
    {
        return;
    }
    Node *deleteNode = temp->next;
    temp->next = temp->next->next;
    delete deleteNode;
}
int size(Node *head)
{
    int count = 0;
    Node *temp = head;
    while (temp != NULL)
    {
        count++;
        temp = temp->next;
    }
    return count;
}
void print_linked_list(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->value << " ";
        temp = temp->next;
    }
    cout << endl;
}
int main()
{
    int querry;
    cin >> querry;
    Node *head = NULL;
    for (int q = 1; q <= querry; q++)
    {
        
        int x, value;
        cin >> x >> value;
            if (x == 0)
            {
                insert_at_head(head, value);
            }
            else if (x == 1)
            {
                insert_at_tail(head, value);
            }
            else if (x == 2)
            {

                if (value <= size(head))
                {
                    delete_from_position(head, value);
                }
            }
        print_linked_list(head);
    }
    return 0;
}