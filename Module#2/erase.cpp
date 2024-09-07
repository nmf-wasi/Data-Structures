#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> Yuna = {10, 20, 30, 40, 50};
    for (int Lia : Yuna)
    {
        cout << Lia << endl;
    }
    cout << endl;
    Yuna.erase(Yuna.begin() + 2, Yuna.begin()+4);
    for (int Lia : Yuna)
    {
        cout << Lia << endl;
    }
    return 0;
}

