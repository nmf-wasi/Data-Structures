#include <bits/stdc++.h>
using namespace std;
int main()
{
    stack <int> Lia;
    queue <int> Jiu;
    int stack_size;
    int queue_size;
    cin>>stack_size;
    for(int i=0;i<stack_size;i++)
    {
        int x;
        cin>>x;
        Lia.push(x);
    }
    cin>>queue_size;
    for(int i=0;i<queue_size;i++)
    {
        int x;
        cin>>x;
        Jiu.push(x);
    }
    bool flag = true;
    if(Jiu.size()!= Lia.size())
    {
        flag = false;
    }
    else
    {
        for (int i = 0; i < stack_size;i++)
        {
            if(Lia.top() != Jiu.front())
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
    if(flag==true)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    return 0;
}