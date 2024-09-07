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
void insert_in_linked_list(Node *&head, Node *&tail, int input)
    {
        Node *newNode = new Node(input);
        if (head == NULL)
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
int size(Node *head)
    {
        Node*temp=head;
        int count = 0;
        while(temp!=NULL)
        {
            count++;
            temp = temp->next;
        }
        return count;
    }
void print_middle_index(Node *head)
    {
        int sz = size(head);
        if (sz % 2 == 0)
            {
                Node *temp_one = head;
                for (int i = 0; i < sz - 1; i++)
                {
                    temp_one = temp_one->next;
                }
                cout << temp_one->value << " " << temp_one->next->value;
            }
        else
            {
                Node *temp_two = head;
                for (int i = 0; i < sz - 1; i++)
                {
                    temp_two = temp_two->next;
                }
                cout << temp_two->value << " " << temp_two->next->value;
            }
    }
int main()
{
    int input;
    Node *head = NULL;
    Node *tail = NULL;
    while (true)
        {
            cin >> input;
            if (input == -1)
                break;
            insert_in_linked_list(head, tail, input);
        }
    print_middle_index(head);
    return 0;
}