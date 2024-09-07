#include <bits/stdc++.h>
using namespace std;
int main()
{
    int input;
    cin>>input;
    vector<int>Lia(input);
    for(int i=0;i<input;i++)
    {
        cin>>Lia[i];
    }
    vector<int>Yuna(input);
    Yuna[input - 1] = 0;
    for(int k=0;k<input-1;k++)
    {
        int max=INT_MIN;
        // everytime we enter this loop, the max is initialised to int_min
        for(int i=k+1;i<input;i++)
        {
            if(Lia[i]>max)
            {
              max=Lia[i];
              // max is replaced by the maximum value of the rest of the vector
              Yuna[k] = max;
            //    if max is replaced, then the new max (or else the old max) will sit  on the i-th index of the new vector
            }
        }
    }
    for(int i=0;i<input;i++)
    {
        cout << Yuna[i] << endl;
    }
    return 0;
}