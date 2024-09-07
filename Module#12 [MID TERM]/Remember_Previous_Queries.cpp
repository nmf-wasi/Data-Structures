#include <bits/stdc++.h>
using namespace std;
int main()
{
    list<int> Lia;
    int querry;
    cin >> querry;
    while (querry--)
    {
        int input, value;
        cin >> input >> value;
        int sz = Lia.size();
        if (input == 0)
            {
                Lia.push_front(value);
                cout << "L -> ";
                for (int val : Lia)
                {
                    cout << val << " ";
                }
                cout << endl;
                cout << "R -> ";
                list<int> Yuna = Lia;
                Yuna.reverse();
                for (auto it = Yuna.begin(); it != Yuna.end(); it++)
                {
                    cout << *it << " ";
                }
                cout << endl;
            }
        else if (input == 1)
            {
                Lia.push_back(value);
                cout << "L -> ";
                for (int val : Lia)
                {
                    cout << val << " ";
                }
                cout << endl;
                cout << "R -> ";
                list<int> Yuna = Lia;
                Yuna.reverse();
                for (auto it = Yuna.begin(); it != Yuna.end(); it++)
                {
                    cout << *it << " ";
                }
                cout << endl;
            }
        else if (input == 2)
            {
                if (Lia.empty() == true)
                    {
                        cout << "L -> " << endl << "R -> " << endl;
                    }
                else if (value == 0)
                    {
                        Lia.pop_front();
                    }
                else if (value == sz - 1)
                    {
                        Lia.pop_back();
                    }
                else if (value > 0 && value < sz - 1)
                    {
                        Lia.erase(next(Lia.begin(), value));
                    }
                cout << "L -> ";
                for (int val : Lia)
                {
                    cout << val << " ";
                }
                cout << endl;
                cout << "R -> ";
                list<int> Yuna = Lia;
                Yuna.reverse();
                for (auto it = Yuna.begin(); it != Yuna.end(); it++)
                {
                    cout << *it << " ";
                }
                cout << endl;
            }
    }
    return 0;
}