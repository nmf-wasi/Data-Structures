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
    bool flag = false;
    for (int i = 0; i < input; i++)
    {
        for (int j = i + 1; j < input; j++)
        {
            if (Lia[i] == Lia[j])
            {
                flag = true;
                break;
            }
        }
        if (flag == true)
         break;
    }
    if (flag == true)
    {
        cout << "YES";
    }
    else
    {
        cout << "No";
    }
    return 0;
}