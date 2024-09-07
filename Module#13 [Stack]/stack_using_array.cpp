#include <bits/stdc++.h>
using namespace std;
class myStack
{
    public:
    vector<int> Lia;
    void push(int value)
    {
        Lia.push_back(value);
    }
    void pop()
    {
        Lia.pop_back();
    }
    int top()
    {
        return Lia.back();
    }
    int sz()
    {
        return Lia.size();
    }
    bool empty()
    {
        if(Lia.size()==0)
        {
            return true;
        }
        else
        {
            return false;
        }

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
    while(stck.empty()==false)
    {
        cout<<stck.top()<<endl;
        stck.pop();
    }
        return 0;
}