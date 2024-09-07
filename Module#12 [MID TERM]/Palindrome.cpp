#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int value;
    Node *next;
    Node *prev;

    Node(int value)
    {
        this->value = value;
        this->next = NULL;
        this->prev = NULL;
    }
};
bool palindrom(Node *head, Node *tail)
{
    Node *i = head;
    Node *j = tail;
    while (i != j)
    {
        if (i->value != j->value)
        {
            return false;
        }
        else
        {
            i = i->next;
            j = j->prev;
        }
    }
    return true;
}

void insert_at_tail(Node *&head, Node *&tail, int value)
{
    Node *newNode = new Node(value);
    if (tail == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    else
    {
        tail->next = newNode;
        newNode->prev = tail;
        tail = tail->next;
        return;
    }
}
int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    int input;
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
    bool flag = palindrom(head, tail);
    if (flag == true)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
    return 0;
}