#include <bits/stdc++.h>
using namespace std;
int main()
{
    int input;
    cin >> input;
    vector<int> Yuna;
    for (int i = 1; i <= input; i++)
    {
        Yuna.push_back(i);
    }
    for (int i = 0; i < input; i++)
    {
        cout << Yuna[i] << " ";
    }
    return 0;
}