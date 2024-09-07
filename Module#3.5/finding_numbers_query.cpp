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
    sort(Lia.begin(), Lia.end());
    int query;
    cin >> query;
    while(query--)
    {
        int find;
        cin >> find;
        int left=0;
        int right = input - 1;
        bool flag = false;
        while(left<=right)
        {
            int mid_index = (left + right) / 2;
            if(Lia[mid_index]==find)
            {
                flag = true;
                break;
            }
            else if(find<Lia[mid_index])
            {
                right = mid_index - 1;
            }
            else if(find>Lia[mid_index])
            {
                left = mid_index + 1;
            }
        }
        if(flag==true)
        {
            cout << "found" << endl;
        }
        else
        {
            cout << "not found" << endl;
        }
    }
    return 0;
}