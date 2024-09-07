#include <bits/stdc++.h>
using namespace std;
int main()
{
    list <int> Lia={10,20,30,40,50};
    for( auto it =Lia.begin();it !=Lia.end();it++)
    {
        cout << *it << endl;
    }
    //when you gotta need pointer of a specificc value from a list
    for(int val:Lia)
    {
        cout << val << endl;
    } //recommended
    //when you dont need the pointer of any value 
    return 0;
}