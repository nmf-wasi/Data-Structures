#include <bits/stdc++.h>
using namespace std;
int main()
{
    int input;
    cin>>input;
    vector<int>Lia;
    for(int i=0;i<input;i++)
    {
        int x, y;
        cin >> x;
        if(x==1)
        {
            cin >> y;
            if(!Lia.empty())
            {
                Lia.insert(Lia.begin() + 1, y);
            }
            else
            {
                Lia.push_back(y);
            }
        }
        else if(x==2)
        {
            cin >> y;
            if(!Lia.empty())
            {
                Lia.insert(Lia.end() - 1, y);
            }
            else
            {
                Lia.push_back(y);
            }
        }
    }
    for(int i=0;i<Lia.size();i++)
    {
      cout<<Lia[i]<<" ";
    }

    return 0;
}