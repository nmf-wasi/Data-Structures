#include <bits/stdc++.h>
using namespace std;
int main()
{
    list <int> Lia={10,20,30,40,50};
    Lia.erase(next(myList.begin(), 2));    
    for(int Value:Lia)
    {
        cout << Value << endl;
    }
    return 0;
}