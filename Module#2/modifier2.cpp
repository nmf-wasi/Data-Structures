#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> Yuna = {10, 20, 30, 40, 50};
    Yuna.pop_back();
    Yuna.push_back(12);
    for (int i = 0; i < Yuna.size(); i++)
    {
        cout << Yuna[i] << endl;
    }
    return 0;
}