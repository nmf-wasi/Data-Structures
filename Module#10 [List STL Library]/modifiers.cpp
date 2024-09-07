#include <bits/stdc++.h>
using namespace std;
int main()
{
    list <int> Lia={10,20,30,40,50,60};
    Lia.pop_back();
    for(int Ryu: Lia)
    {
        cout << Ryu << endl;
    }
    Lia.pop_front();
    for(int Ryu: Lia)
    {
        cout << Ryu << endl;
    }
    cout << endl;
    Lia.pop_front();
    for(int Ryu: Lia)
    {
        cout << Ryu << endl;
    }
    cout << endl;
    Lia.push_back(100);
    for(int Ryu: Lia)
    {
        cout << Ryu << endl;
    }
    cout << endl;
    Lia.push_front(100);
    for(int Ryu: Lia)
    {
        cout << Ryu << endl;
    }

    return 0;
}