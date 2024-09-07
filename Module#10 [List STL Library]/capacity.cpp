#include <bits/stdc++.h>
using namespace std;
int main()
{
    list <int> Lia = {10, 20, 30, 40, 50};
    cout<<"Size of Lia = "<<Lia.size()<<endl;
    cout<<"Max size of Lia = "<<Lia.max_size()<<endl;
    cout<<"Max size of Lia = "<<Lia.max_size()<<endl;
    Lia.clear();
    cout << "after clearing";
    cout<<"Size of Lia = "<<Lia.size()<<endl;
    cout<<"Max size of Lia = "<<Lia.max_size()<<endl;
    if(Lia.empty()==true)
    {
        cout << "LIST IS EMPTY";
    }
    else
    {
        cout << "NOT EMPTY";
    }
    list <int> Lia = {10, 20, 30, 40, 50};
    Lia.resize(3);
    cout<<"after resizing";
    cout << "Size of Lia = " << Lia.size() << endl;
    cout << "Max size of Lia = " << Lia.max_size() << endl;

    return 0;
}