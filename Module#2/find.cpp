#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> Yuna = {1,1,2,3,4,3,5,7,6,2,5,4,3,3};
    auto it=find(Yuna.begin(),Yuna.end(),3);
    if(it==Yuna.end())
    {
        cout << "not found";
    }
    else
    {
        cout << "found";
    }
    return 0;
}
