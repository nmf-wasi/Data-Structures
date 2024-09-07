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
    Yuna.insert(Yuna.begin() + 1, 23);
    for (int Lia : Yuna)
    {
        cout << Lia << endl;
    }
    vector<int> Yeji = {1, 2, 3, 4, 5};
    Yuna.insert(Yuna.begin() + 1, Yeji.begin(), Yeji.end());
    cout << endl;
    for (int Lia : Yuna)
    {
        cout << Lia << endl;
    }

    return 0;
}