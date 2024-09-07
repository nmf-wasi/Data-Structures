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
class myStack
{
    public:
    Node *head = NULL;
    Node *tail = NULL;
    int sz=0;

    void push(int value)
    {
        sz++;
        Node *newNode = new Node(value);
        if (head == NULL)
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
    void pop()
    {
        sz--;
        Node *deleteNode = tail;
        tail = tail->prev;
        if (tail == NULL)
        {
            head = NULL;
            delete deleteNode;
            return;
        }
        else
        {
            tail->next = NULL;
            delete deleteNode;
        }
    }
    int top()
    {
        return tail->value;
    }
    int size()
    {
        return sz;
    }
    bool empty()
    {
        if (sz != 0)
        {
            return false;
        }
        else
            return true;
    }
};
int main()
{
    myStack Lia;
    myStack Yuna;
    int input_1;
    int input_2;
    cin >> input_1;
    for (int i = 0; i < input_1; i++)
    {
        int x;
        cin >> x;
        Lia.push(x);
    }
    cin >> input_2;
    for (int i = 0; i < input_2; i++)
    {
        int y;
        cin >> y;
        Yuna.push(y);
    }
    int Lsz = Lia.size();
    int Ysz = Yuna.size();
    bool flag = true;
    if (Lsz != Ysz)
    {
        flag = false;
    }
    else
    {
        for (int i = 0; i < Lsz;i++)
        {
            if (Lia.top() != Yuna.top())
            {
                flag = false;
                break;
            }
            else
            {
                Lia.pop();
                Yuna.pop();
            }
        }
    }
    if(flag==false)
    {
        cout << "NO" << endl;
    }
    else
    {
        cout << "YES";
    }

        return 0;
}