#include <bits/stdc++.h>
using namespace std;
int main()
{
    int input;
    cin>>input;
    vector<int>Yuna(input);
    for (int i = 0; i < input;i++)
    {
        cin >> Yuna[i];
    }
    int rep1, rep2;
    cin >> rep1 >> rep2;
    replace(Yuna.begin(),Yuna.end(),rep1,rep2);
    int find;
    cin >> find;
    for (int i = 0; i < input;i++)
    {
        if(Yuna[i]==find)
        {
            find = i;
            break;
        }
    }
    for(int Lia:Yuna)
    {
        cout << Lia << " ";
    }
    cout << endl;
    cout << find;
    return 0;
}