#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> Yuna = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    cout << "size = " << Yuna.size() << endl;
    cout << "capacity = " << Yuna.capacity() << endl;
    cout << "maximum size = " << Yuna.max_size() << endl;
    Yuna.resize(20, 0);
    for (int Lia : Yuna)
    {
        cout << Lia << " ";
    }
    cout << endl;
    cout << "size = " << Yuna.size() << endl;
    cout << "capacity = " << Yuna.capacity() << endl;
    Yuna.clear();
    cout << "size = " << Yuna.size() << endl;
    cout << "capacity = " << Yuna.capacity() << endl;

    if (Yuna.empty() == true)
    {
        cout << "IS EMPTY" << endl;
    }
    else
    {
        cout << "NOT EMPTY" << endl;
    }
    Yuna.resize(10, 100);

    cout << "size = " << Yuna.size() << endl;
    cout << "capacity = " << Yuna.capacity() << endl;
    cout << "maximum size = " << Yuna.max_size() << endl;
    return 0;
}