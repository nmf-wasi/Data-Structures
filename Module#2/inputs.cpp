#include <bits/stdc++.h>
using namespace std;
int main()
{
    int input;
    vector<int>Yuna;
    cin>>input;
    for(int i=0;i<input;i++)
    {
        int x;
        cin>>x;
        Yuna.push_back(x);
    }
    for(int Lia:Yuna)
    {
        cout<<Lia<<endl;
    }
    return 0;
}
