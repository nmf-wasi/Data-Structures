#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector <int> Yuna(5,10);
    vector <int> Lia(Yuna);

    for (int i = 0; i < Yuna.size(); i++)
    {
        cout << Yuna[i] << " ";
    }
    cout << endl;
    cout << Yuna.size() << endl;

    for (int i = 0; i < Lia.size(); i++)
    {
        cout << Lia[i] << " ";
    }
    cout << endl;
    cout << Lia.size() << endl;
    return 0;
}