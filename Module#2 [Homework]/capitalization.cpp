#include <bits/stdc++.h>
using namespace std;
int main()
{
    int input;
    cin >> input;
    vector<string> Yuna(input);
    for (int i = 0; i < input; i++)
    {
        cin >> Yuna[i];
        cin.ignore();
    }
    for (int i = 0; i < input; i++)
    {
        Yuna[i][0] -= 32;
    }
    for (int i = 0; i < input; i++)
    {
        cout << Yuna[i] << endl;
    }
    return 0;
}