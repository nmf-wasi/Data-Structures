#include <bits/stdc++.h>
using namespace std;
class myStack
{
    public:
            list <int> Lia;
            void push (int value)
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
            int size()
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
    cin>>input;
    for (int i = 0; i < input;i++)
    {
        int x;
        cin >> x;
        stck.push(x);
    }
    cout << endl << stck.size() << endl;
    while(! stck.empty())
    {
        cout << stck.top() << endl;
        stck.pop();
    }
    cout <<endl << stck.size() << endl;
    return 0;
}