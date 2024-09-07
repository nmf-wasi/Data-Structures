#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>Lia;
    int input;
    cin >> input;
    for (int i = 0;i<input;i++)
    {
        int x;
        cin >> x;
        Lia.push_back(x);
        int current_index = Lia.size() - 1;
        while(current_index!=0)
        {
            int parent_index=(current_index-1)/2;
            if(Lia[parent_index]<Lia[current_index])
            {
                swap(Lia[parent_index], Lia[current_index]);
            }
            else
                break;
            current_index = parent_index;
        }
    }

    for (int val : Lia)
        cout << val << " ";
    return 0;
}