#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> Yuna={1,2,3,4,5};
    vector<int> Yeji={10,20,30,40,60};
    Yuna=Yeji;
    // Time complexicity: O(1)
    for (int i = 0; i < Yuna.size(); i++)
    {
        cout << Yuna[i] << endl;
    }
    
    vector<int> Lia={1,2,3,4};
    vector<int> Ryu = {10, 20, 30, 40, 60};
    Lia = Ryu;
    // Time complexicity: O(N) since they are different sizes
    for (int i = 0; i < Lia.size(); i++)
    {
        cout << Lia[i] << endl;
    }
        return 0;
}