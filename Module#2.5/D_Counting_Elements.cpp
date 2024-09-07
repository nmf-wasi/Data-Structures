#include <bits/stdc++.h>
using namespace std;
int main()
{
    int input;
    cin>>input;
    vector<int>Lia(input);
    for (int i = 0; i < input; ++i)
    {
        cin >> Lia[i];
    }
    int count = 0;
    for (int i = 0; i < input;i++)
    {
        auto it =find(Lia.begin(),Lia.end(),Lia[i]+1);
        if (it != Lia.end())
        {
            count++;
        }
    }
    cout << count;
    return 0;
}