#include <bits/stdc++.h>
using namespace std;
vector<int> running_sum(vector<int> & Yeji, int sz)
{
    vector<int> run_sum(sz);
    run_sum[0] = Yeji[0];
    for (int i = 1; i < sz; i++)
    {
        run_sum[i] = Yeji[i] + run_sum[i - 1];
    }
    return run_sum;
}
int main()
{
    int input;
    cin >> input;
    vector<int> Lia(input);
    for (int i = 0; i < input; i++)
    {
        cin >> Lia[i];
    }
    vector<int> Yuna = running_sum(Lia, input);
    for (int i = 0; i < input; i++)
    {
        cout << Yuna[i] << " ";
    }
    return 0;
}