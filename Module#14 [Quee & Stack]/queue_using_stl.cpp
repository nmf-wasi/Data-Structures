#include <bits/stdc++.h>
using namespace std;
int main()
{
    queue <int> Lia;
    int input;
    cin >> input;
    for (int i = 0; i < input; i++)
    {
        int x;
        cin >> x;
        Lia.push(x);
    }
    cout << "size of Lia = " << Lia.size()<<endl;
    while (!Lia.empty())
    {
        cout << Lia.front() << endl;
        Lia.pop();
    }
    cout << "size of Lia = " << Lia.size()<<endl;
    return 0;
}