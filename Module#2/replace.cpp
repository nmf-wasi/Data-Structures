#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> Yuna = {1,3,2,3,4,3,5,7,6,2,5,4,3,3};
    replace(Yuna.begin(),Yuna.end(),3,100);
    // replace(vector_name.begin(), vector_name.end(), what_to_replace, with_what_to_replace);
    for (int Lia : Yuna)
    {
        cout << Lia << endl;
    }
    return 0;
}