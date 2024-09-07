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
    stack<int> Yuna;

    for (int i = 0; i < input; i++)
    {
        int x = Lia.top();
        Lia.pop();
        Yuna.push(x);
    }

    for (int i = 0; i < input; i++)
    {
        // int x = Lia.top();
        cout << Yuna.top() << endl;
        Yuna.pop();
        // Yuna.push(x);
    }

    return 0;
}