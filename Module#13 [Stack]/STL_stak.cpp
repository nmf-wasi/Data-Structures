#include <bits/stdc++.h>
using namespace std;
int main()
{
    stack <int> Lia;
    int input;
    cin >> input;
    for (int i = 0;i<<input;i++)
    {
        int x;
        cin >> x;
        Lia.push(x);
    }
    
    cout << "Size= " << Lia.size() << endl;
    
    while(!Lia.empty())
    {
        cout << Lia.top() << endl;
        Lia.pop();
    }

    cout << "Size= " << Lia.size() << endl;

    return 0;
}