#include <bits/stdc++.h>
using namespace std;
int main()
{
    int input;
    cin>>input;
    vector<string> Yuna;
    for (int i = 0; i < input;i++)
    {
        string s;
        cin >> s;
        Yuna.push_back(s);
    }
    for(string Lia:Yuna)
    {
        cout << Lia << endl;
    }
    // range based loop
    cout << endl;
    for (int i = 0; i < input;i++)
    {
        cout << Yuna[i] << endl;
    }
    // normal loop
        return 0;
}