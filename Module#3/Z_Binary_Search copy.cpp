#include <bits/stdc++.h>
using namespace std;
int main()
{
    int input,query;
    cin >> input >> query;
    int Lia[input];
    for(int i=0;i<input;i++)
    {
        cin >> Lia[i];
    }
    while(query--)
    {
        int x;
        cin >> x;
        bool flag = false;
        for (int i = 0; i < input;i++)
        {
            if(Lia[i]==x)
            {
                flag = true;
                break;
            }
        }
        if (flag==true)
        {
            cout << "found"<<endl;
        }
        else
        {
            cout << "not found"<<endl;
        }
    }
    return 0;
}