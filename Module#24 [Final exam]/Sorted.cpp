#include <bits/stdc++.h>
using namespace std;
int main()
{
    int testcase;
    cin >> testcase;
    for (int t = 0;t<testcase;t++)
    {
        int input;
        cin >> input;
        set<int> Lia[input];
        for (int i = 0; i < input;i++)
        {
            int x;
            cin >> x;
            Lia->insert(x);
        }
        for (auto it = Lia->begin(); it != Lia->end();it++)
        {
            cout << *it << " ";
        }
    }
    return 0;
}