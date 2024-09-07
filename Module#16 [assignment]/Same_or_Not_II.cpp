#include <bits/stdc++.h>
using namespace std;
class myStack
{
public:
    list<int> Lia;
    void push(int value)
    {
        Lia.push_front(value);
    }
    void pop()
    {
        Lia.pop_front();
    }
    int top()
    {
        return Lia.front();
    }
    int size()
    {
        return Lia.size();
    }
    bool empty()
    {
        return Lia.empty();
    }
};
class myQueue
{
public:
    list<int> Lia;
    void push(int value)
    {
        Lia.push_back(value);
    }
    void pop()
    {
        Lia.pop_front();
    }
    int front()
    {
        return Lia.front();
    }
    int size()
    {
        return Lia.size();
    }
    bool empty()
    {
        return Lia.empty();
    }
};
int main()
{
    myStack Lia;
    myQueue Jiu;
    int stack_size;
    int queue_size;
    cin >> stack_size;
    cin >> queue_size;
    for (int i = 0; i < stack_size; i++)
    {
        int x;
        cin >> x;
        Lia.push(x);
    }
    for (int i = 0; i < queue_size; i++)
    {
        int y;
        cin >> y;
        Jiu.push(y);
    }
    bool flag = true;
    if (Jiu.size() != Lia.size())
    {
        flag = false;
    }
    else
    {
        for (int i = 0; i < stack_size; i++)
        {
            if (Lia.top() != Jiu.front())
            {
                flag = false;
                break;
            }
            else
            {
                Lia.pop();
                Jiu.pop();
            }
        }
    }
    if (flag == true)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    return 0;
}
