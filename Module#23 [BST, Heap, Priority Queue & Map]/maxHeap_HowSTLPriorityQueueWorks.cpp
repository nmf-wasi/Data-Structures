#include <bits/stdc++.h>
using namespace std;
int main()
{
    priority_queue<int>pq;
    while(true)
    {
        int command;
        cin>>command;
        if(command==0)
        {
            int x;
            cin>>x;
            pq.push(x);     //O(logN)
        }
        else if (command==1)
        {
            pq.pop(); // O(logN)
        }
        else if (command==2)
        {
            cout<<pq.top()<<endl; // O(1)
            // in queue q.front() is usually used to see the first value
            // howver, this is a heap. therefore, we imagine it as a binary tree and use top to find the first value
        }
        else 
        {
            break;
        }
    }

    return 0;
}