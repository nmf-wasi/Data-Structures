#include <bits/stdc++.h>
using namespace std;
int main()
{
    list <int> Lia={10,20,30,40,50};
    Lia.insert(next(Lia.begin(),2),100); // -> will work because next function uses address and returns adress with is ok with list
    for( int value:Lia)
    {
        cout<<value<<endl;
    }
    Lia.insert(next(Lia.begin(),2),{100,200,300,400,500}); // -> will work because next function uses address and returns adress with is ok with list
    for( int value:Lia)
    {
        cout<<value<<endl;
    }
    list<int> Yuna = {1, 2, 3, 4, 5};
    Lia.insert(next(Lia.begin(),2),Yuna.begin(),Yuna.end()); // -> will work because next function uses address and returns adress with is ok with list
    for( int value:Lia)
    {
        cout<<value<<endl;
    }

    return 0;
}