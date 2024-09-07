#include <bits/stdc++.h>
using namespace std;
int main()
{
    int input;
    cin>>input;
    vector<int> Lia(input);
    for (int i = 0; i < input;i++)
    {
        cin >> Lia[i];
        if(Lia[i]>0)
        {
            Lia[i] = 1;
        }
        else if(Lia[i]<0)
        {
            Lia[i] = 2;
        }
        cout << Lia[i] << " ";
    }
        return 0;
}