#include <bits/stdc++.h>
using namespace std;
int main()
{
    int input;
    cin>>input;
    vector<int>Lia(input);
    for(int i=0;i<input;i++)
    {
        cin >> Lia[i];
    }
    vector <long long int> Yuna(input);
    Yuna[0] = Lia[0];
    for (int i = 1;i<input;i++)
    {
        Yuna[i] = Lia[i] + Yuna[i - 1];
    }
    for (int i = input - 1;i>=0;i--)
    {
        cout << Yuna[i]<<" ";
    }

        return 0;
}