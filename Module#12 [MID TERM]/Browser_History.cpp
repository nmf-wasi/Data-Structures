#include <bits/stdc++.h>
using namespace std;
int main()
{
    list <string> Lia;
    string Yuna;
    while(true)
    {
        cin>>Yuna;
        if(Yuna=="end")
        {
            break;
        }
        else
        {
            Lia.push_back(Yuna);
        }
    }
        int querry;
        cin >> querry;
         auto start_histry = Lia.begin();
        while(querry--)
        {
            string command, address;
            cin >> command;
            if(command=="visit")
            {
                cin>>address;
                auto it_2=find(Lia.begin(),Lia.end(),address);
                if(it_2!=Lia.end())
                {
                    start_histry = it_2;
                    cout << *start_histry << endl;
                }
                else
                {
                    cout << "Not Available" << endl;
                }
            }
            else if(command=="prev")
            {
                if (start_histry!=Lia.begin())
                {
                    start_histry--;
                    cout << *start_histry<<endl;
                }
                else
                {
                    cout << "Not Available"<<endl;
                }
            }
            else if(command=="next")
            {
                if (next(start_histry)!=Lia.end())
                {
                    start_histry++;
                    cout << *start_histry<<endl;
                }
                else
                {
                    cout << "Not Available" << endl;
                }
            }
            else
            {
                cout << "Not Available" << endl;
            }
        }
    return 0;
}