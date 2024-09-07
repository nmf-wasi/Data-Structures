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

    vector<int> left_sum(input);
    vector<int> right_sum(input);

    // Calculate left_sum
    left_sum[0] = 0; // No elements to the left of the first element
    for (int i = 1; i < input; i++)
    {
        left_sum[i] = left_sum[i - 1] + Lia[i - 1];
    }

    // Calculate right_sum
    right_sum[input - 1] = 0; // No elements to the right of the last element
    for (int i = input - 2; i >= 0; i--)
    {
        right_sum[i] = right_sum[i + 1] + Lia[i + 1];
    }

    // Find and output equilibrium points
    bool found_equilibrium = false;
    for (int i = 0; i < input; i++)
    {
        if (left_sum[i] == right_sum[i])
        {
            found_equilibrium = true;
            cout << i << endl;
        }
    }

    if (found_equilibrium==false)
    {
        cout << "No equilibrium point found" << endl;
    }

    return 0;
}