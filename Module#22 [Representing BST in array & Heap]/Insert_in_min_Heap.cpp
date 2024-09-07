#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> Lia;
    int input; //number of inputs
    cin >> input;
    for (int i = 0; i < input;i++)
    {
        int x;//taking input
        cin >> x;
        Lia.push_back(x);
        // pushback done in vector like a complete binary tree
        int cur_idx = Lia.size() - 1;
        while (cur_idx != 0)
        {
            int parent_idx = (cur_idx - 1) / 2;
            if (Lia[parent_idx] > Lia[cur_idx])
                swap(Lia[parent_idx], Lia[cur_idx]);
            else
                break;
            cur_idx = parent_idx;
        }
    }
    // complexity: Nlong(N)
    // to insert one value in this binary tree, complexity is log(N), to insert N values, complexity: Nlog(N)
    for (int x : Lia)
        cout << x << " ";
    return 0;
}