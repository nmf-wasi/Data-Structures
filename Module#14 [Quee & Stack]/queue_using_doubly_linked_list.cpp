#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int value;
    Node *next;
    Node *perv;

    Node(int value)
    {
        this->value = value;
        this->next = NULL;
        this->perv = NULL;
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
                newNode->perv = tail;
                tail = tail->next;
            }
        }
        void pop()
        {
            size--;
            Node *deleteNode = head;//only deletes the front element
            head = head->next;
            if(head==NULL)
            {
                tail = NULL;
                delete deleteNode;
                return;
            }
            else
            {
                head->perv = NULL;
                delete deleteNode;
            }
        }
        int front()
        {
            return head->value;
        }
        int size()
        {
            return size;
        }
        bool empty()
        {
            if(size==0)
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
    cout << "size of Lia = " << Lia.size()<<endl;
    while(!Lia.empty())
    {
        cout << Lia.front() << endl;
        Lia.pop();
    }
    cout << "size of Lia = " << Lia.size()<<endl;
    return 0;
}