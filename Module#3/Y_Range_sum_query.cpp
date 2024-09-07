#include <bits/stdc++.h>
using namespace std;
int main()
{
    int input,query;
    cin>>input>>query;
    int Lia[input];
    for(int i=0;i<input;i++)
    {
        cin >> Lia[i];
    }
    while (query--) // can use for loop as well for(int i=0;i<query;i++)
    {
        int L, R;
        cin >> L >> R;
        L--;
        R--;
        int sum = 0;
        // converting positon to index Position starts from 1, index starts from 0
        for (int i = L; i < R;i++)
        {
            sum += Lia[i];
            cout << sum << endl;
        }
    }
        return 0;
}