#include <bits/stdc++.h>
using namespace std;
int main()
{
    int input;
    cin>>input;
    vector<int>Yuna(input);
    for (int i = 0; i < input;i++)
    {
        cin >> Yuna[i];
    }
    for (int i = input-1; i >=0 ;i--)
    {
        cout << Yuna[i]<<" ";
    }
        return 0;
}