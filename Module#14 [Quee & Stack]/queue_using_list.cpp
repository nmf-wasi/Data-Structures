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
        list<int> l;
        void push(int val)
        {
            l.push_back(val);
        }
        void pop()
        {
            l.pop_front();
        }
        int front()
        {
            return l.front();
        }
        int size()
        {
            return l.size();
        }
        bool empty()
        {
            return l.empty();
        }
};
int main()
{
    myQueue Lia;
    int input;
    cin >> input;
    for (int i = 0; i < input; i++)
    {
        int x;
        cin>>x;
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