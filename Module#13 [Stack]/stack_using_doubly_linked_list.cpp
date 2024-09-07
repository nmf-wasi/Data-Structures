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
        int sz = 0;
        void push(int value)
        {
            // not taking &head becasue the void func is inside the myStack class & head was declared inside this class
            sz++;
            Node *newNode=new Node(value);
            if(head == NULL)
            {
                head = newNode;
                tail = newNode;
                return;
            }
            else
            {
                tail->next = newNode;
                newNode->prev = tail;
                tail = newNode;
            }
        }
        void pop()
        {
            sz--;
            // gonna popout the last item of the stack, so no need to check the head
            Node *deleteNode = tail;
            tail = tail->next;
            if(tail == NULL)
            {
                head = NULL;
            }
            else
            {
                tail->next = NULL;
            }
            delete deleteNode;
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
            if(sz!=0)
            {
                return false;
            }
            else
                return true;
        }
};
int main()
{
    myStack stck;
    int input;
    cin >> input;
    for (int i = 0; i < input;i++)
    {
        int x;
        cin >> x;
        stck.push(x);
    }
    while(!stck.empty())
    {
        cout << stck.top() << endl;
        stck.pop();
    }
    
        return 0;
}