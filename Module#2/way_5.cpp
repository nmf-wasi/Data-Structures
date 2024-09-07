#include <bits/stdc++.h>
using namespace std;
int main()
{
    int Lia[5] = {10, 20, 30, 40, 50};
    vector<int> Yuna(Lia, Lia + 5);
    for (int i = 0; i < Yuna.size(); i++)
    {
        cout << Yuna[i] << " ";
    }
    cout << endl;
    cout << Yuna.size() << endl;
    return 0;
}