//  https://www.online-ide.com/
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
void print_linked_list(Node *head)
{
    cout << "Your Linked List: " << endl;
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
    Node *head = NULL;
    while (true)
    {
        cout << "Option#1: Insert at tail" << endl;
        cout << "Option#2: Print Linked List" << endl;
        cout << "Option#3: Terminate" << endl;
        int option;
        cin >> option;
        if (option == 1)
        {
            cout << "Please enter value";
            int value;
            cin >> value;
            insert_at_tail(head, value);
        }
        else if (option == 2)
        {
            print_linked_list(head);
        }
        else if (option == 3)
        {
            break;
        }
    }
    return 0
}