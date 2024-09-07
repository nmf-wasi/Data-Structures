#include <bits/stdc++.h>
using namespace std;
int main()
{
    int input_one;
    cin >> input_one;
    vector<int> Lia(input_one);
    for(int i=0;i<input_one;i++)
    {
        cin >> Lia[i];
    }
    int input_two;
    cin >> input_two;
    vector<int> Yuna(input_two);
    for(int i=0;i<input_two;i++)
    {
        cin>>Yuna[i];
    }
    int index;
    cin >> index;
    Lia.insert(Lia.begin()+index, Yuna.begin(), Yuna.end());
    for(int i=0;i<Lia.size();i++)
    {
        cout << Lia[i] << " ";
    }
    return 0;
}