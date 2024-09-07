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
    vector<int> Yuna(input);
    Yuna[input - 1] = 0;
    // last one is handled manually
    int max_right = Lia[input - 1];
    // the last one's previous one will be the original vector's last element
    for (int i = input - 2; i >= 0; i--)
    {
        Yuna[i] = max_right;
        // after assigning the last element of the original vector at the second last of the new vector,
        if (Lia[i] > max_right)
        //  we can change the max value if the new index's value is bigger than the current max
        {
            max_right = Lia[i];
        }
    }
    for (int i = 0; i < input; i++)
    {
        cout << Yuna[i] << endl;
    }
    return 0;
}