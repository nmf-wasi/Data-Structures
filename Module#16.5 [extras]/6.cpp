#include <bits/stdc++.h>
using namespace std;
int main()
{
    string Lia;
    cin>>Lia;
    stack<char>Yuna;
    for(char Yeji:Lia)
    {
        Yuna.push(Yeji);
    }
    while(!Yuna.empty())
    {
        cout<<Yuna.top();
        Yuna.pop();
    }
    return 0;
}