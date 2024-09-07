#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int input, query;
    cin >> input >> query;
    long long int Lia[input];
    for (int i = 0; i < input; i++)
    {
        cin >> Lia[i];
    }
    long long int pre[input];
    pre[0] = Lia[0];
    for (int i = 1; i < input; i++)
    {
        pre[i] = Lia[i] + pre[i - 1];
    }

    while (query--) // can use for loop as well for(int i=0;i<query;i++)
    {
        long long int L, R;
        cin >> L >> R;
        L--;
        R--;
        long long int sum;
        // converting positon to index Position starts from 1, index starts from 0
        if (L == 0)
        {
            sum = pre[R];
        }
        else
        {
            sum = pre[R] - pre[L - 1];
        }
        cout << sum << endl;
    }
    return 0;
}