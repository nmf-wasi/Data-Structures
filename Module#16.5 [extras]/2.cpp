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
    vector<int> right_sum(input);
    right_sum[input - 1] = 0;
    for (int i = input - 1; i >= 0; i--)
    {
        right_sum[i] = Lia[i + 1] + right_sum[i + 1];
    }

    for (int i = 0; i < input; i++)
    {
        cout << right_sum[i] << endl;
    }
    return 0;
}