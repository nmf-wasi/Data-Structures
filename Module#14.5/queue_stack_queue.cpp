#include <bits/stdc++.h>
using namespace std;
int main()
{
    queue<int> Lia;
    int sin;
    cin >> sin;
    for (int i = 0; i < sin; i++)
    {
        int your_sin;
        cin >> your_sin;
        Lia.push(your_sin);
    }
    stack<int> Yuna;
    while (!Lia.empty())
    {
        int a = Lia.front();
        Yuna.push(a);
        Lia.pop();
    }
    queue<int> Yeji;
    while (!Yuna.empty())
    {
        int a = Yuna.top();
        Yeji.push(a);
        Yuna.pop();
    }
    while (!Yeji.empty())
    {
        cout << Yeji.front() << endl;
        Yeji.pop();
    }

    return 0;
}