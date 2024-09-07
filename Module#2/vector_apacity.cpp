#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>Lia;
    Lia.push_back(10);
    Lia.push_back(20);
    Lia.push_back(30);
    Lia.push_back(40);
    Lia.push_back(50);
    cout << "before 1st resize=" << endl;
    for (int i = 0; i < Lia.size(); i++)
    {
        cout << Lia[i] << " ";
    }
    cout << endl;
    Lia.resize(3);
    cout << "after 1st resize=" << endl;
    for (int i = 0; i < Lia.size(); i++)
    {
        cout << Lia[i] << " ";
    }
    cout << endl;
    Lia.resize(7);
    cout << "after 2nd resize=" << endl;
    for (int i = 0; i < Lia.size(); i++)
    {
        cout<< Lia[i] << " ";
    }
    cout << endl;
    cout << "after 3rd resize=" << endl;
    Lia.resize(3);
    Lia.resize(7, 55);
    for (int i = 0; i < Lia.size(); i++)
    {
        cout << Lia[i] << " ";
    }
    return 0;
}