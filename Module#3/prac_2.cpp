#include <bits/stdc++.h>
using namespace std;
int main()
{
    int input;
    cin >> input;
    vector<int> Lia(input);
    for (int i = 0; i < input; i++)
    {
        cin >> Lia[i];
    }
    vector<int> Yuna(input);
    Yuna[0] = 0;
    Yuna[1] = Lia[1 - 1];
    for (int i = 2; i < input; i++)
    {
        Yuna[ i]  =  Yuna[i - 1]+Lia[i-1];
    }
    for(int Yeji:Yuna)
    {
        cout << Yeji << " ";
    }
    return 0;
}