#include <bits/stdc++.h>
using namespace std;
int main()
{
    string Yuna;
    cin >> Yuna;
    vector<int> Lia(26, 0);
    for (char c : Yuna)
    {
        Lia[c - 'a']++;
    }
    for (int i = 0; i < 26; i++)
    {
        if (Lia[i] != 0)
        {
            cout << char(i + 'a') << " : " << Lia[i] << endl;
        }
    }
    return 0;
}