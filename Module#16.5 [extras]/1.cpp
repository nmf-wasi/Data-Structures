#include <bits/stdc++.h>
using namespace std;
int main()
{
    int input;
    cin >> input;
    vector<int> Lia(input);
    for(int i=0;i<input;i++)
    {
        cin >> Lia[i];
    }
    for (int i = 1; i < input;i++)
    {
        if(Lia[i-1]>Lia[i] && Lia[i]<Lia[i+1])
        {
            cout << Lia[i]<<endl;
        }
    }

        return 0;
}