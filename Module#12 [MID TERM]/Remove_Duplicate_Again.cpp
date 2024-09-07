#include <bits/stdc++.h>
using namespace std;
int main()
{
    
    list <int> Lia;
    int input;
    while(true)
    {
        cin>>input;
        if(input==-1)
        {
            break;
        }
        else
        {
            Lia.push_back(input);
        }
    }
    Lia.sort();
    Lia.unique();
    for(int Yeji:Lia)
    {
        cout << Yeji << " ";
    }
    return 0;
}