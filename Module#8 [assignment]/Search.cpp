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
int check_the_index(Node *head, int check)
{
    Node *temp = head;
    int index = -1;
    while (temp != NULL)
    {
        index++;
        if (temp->value == check)
        {
            return index;
        }
        temp = temp->next;
    }
    return -1;
}
int main()
{
    int testcases;
    cin >> testcases;
    for (int t = 1; t <= testcases; t++)
    {
        int input;
        Node *head = NULL;
        Node *tail = NULL;
        while (true)
        {
            cin >> input;
            if (input == -1)
            {
                break;
            }
            else
            {
                insert_at_tail(head, tail, input);
            }
        }
        int check;
        cin >> check;
        int index = check_the_index(head, check);
        cout << index << endl;
    }

    return 0;
}