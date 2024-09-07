#include <bits/stdc++.h>
using namespace std;
int main()
{
    int input;
    cin >> input;
    cin.ignore();
    vector<string> Yuna(input);
    for (int i = 0; i < input; i++)
    {
        getline(cin,Yuna[i]);
    }
    for (string Lia : Yuna)
    {
        cout << Lia << endl;
    }
    // range based loop
    cout << endl;
    for (int i = 0; i < input; i++)
    {
        cout << Yuna[i] << endl;
    }
    // normal loop
    return 0;
}