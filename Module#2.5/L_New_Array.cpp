#include <bits/stdc++.h>
using namespace std;
int main()
{
    int input;
    cin>>input;
    vector <int>Lia(input);
    vector <int>Yeji(input);
    for(int i=0;i<input;i++)
    {
        cin>>Lia[i];
    }
    for(int i=0;i<input;i++)
    {
        cin>>Yeji[i];
    }
    vector <int> Yuna(Yeji);
    Yuna.insert(Yuna.end(), Lia.begin(), Lia.end());

    for (int i = 0; i < Yuna.size();i++)
    {
        cout << Yuna[i] << " ";
    }
        return 0;
}