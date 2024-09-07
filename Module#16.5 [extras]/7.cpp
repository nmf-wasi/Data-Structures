#include <bits/stdc++.h>
using namespace std;
int main()
{
    int input;
    cin >> input;
    queue<int> Lia;
    for (int i = 0; i < input; i++)
    {
        int x;
        cin >> x;
        Lia.push(x);
    }
    int y;
    cin >> y;
    queue<int> Yuna(Lia);
    for (int i = 0; i < input; i++)
    {
        int element = Lia.front();
        Lia.pop();
        if (i != y - 1)
        {
            Lia.push(element);
        }
    }
    for (int i = 0; i < input - 1; i++)
    {
        int x;
        cout << Lia.front() << " ";
        Lia.pop();
    }
    return 0;
}