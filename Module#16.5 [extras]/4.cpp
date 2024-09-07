#include <bits/stdc++.h>
using namespace std;
int main()
{
    stack<int> Lia;
    int input;
    cin >> input;
    for (int i = 0; i < input; i++)
    {
        int x;
        cin >> x;
        Lia.push(x);
    }
    int x;
    cin >> x;
    for (int i = 0; i < input - x; i++)
    {
        Lia.pop();
    }
    cout << Lia.top();
    return 0;
}