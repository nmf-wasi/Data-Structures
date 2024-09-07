#include <bits/stdc++.h>
using namespace std;
int main()
{
    int testcase;
    cin>>testcase;
    for(int t=0;t<testcase;t++)
    {
        int input;
        cin>>input;
        vector<int>Lia(input);
        for(int i=0;i<input;i++)
        {
            cin >> Lia[i];
        }
        bool flag = true;
        for(int i=0;i<input-1;i++)
        {
            if(Lia[i]>Lia[i+1])
                {
                    flag=false;
                    break;
                }
        }        
        if(flag==false)
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES"<<endl;
        }
    }
    
    return 0;
}