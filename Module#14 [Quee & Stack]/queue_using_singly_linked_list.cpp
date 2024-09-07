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
class myQueue
{
    public:
        Node *head = NULL;
        Node *tail = NULL;
        int size = 0;
        void push(int value)
        {
            size++;
            Node *newNode = new Node(value);
            if(head==NULL)
            {
                head = newNode;
                tail = newNode;
                return;
            }
            else
            {
                tail->next = newNode;
                tail = tail->next;
                return;
            }
        }
        void pop() //queue only leaves elements from top(1st element)
        {
            size--;
            if(head==NULL)
            {
                tail==NULL;
            }
            else
            {
                Node *deleteNode=head;
                head = head->next;
                delete deleteNode;
            }
        }
        int front() //the element from top (not deleting, just showing)
        {
            return head->value;
        }
        int size()
        {
            return size;
        }
        bool empty()
        {
            if (size == 0)
                return true;
            else
                return false;
        }

};
int main()
{
    myQueue Lia;
    int input;
    cin >> input;
    for (int i = 0; i < input;i++)
    {
        int x;
        cin >> x;
        Lia.push(x);
    }
    while(!Lia.empty())
    {
        cout << Lia.front() << endl;
        Lia.pop();
    }

    return 0;
}