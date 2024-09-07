#include <bits/stdc++.h>
using namespace std;
int main()
{
    int test;
    cin >> test;
    for (int t = 0; t < test; t++)
    {
        string Lia;
        cin >> Lia;
        stack<char> Yeji;
        for (char Yuna : Lia)
        {
            if (Yeji.empty())
            {
                Yeji.push(Yuna);
            }
            else if (Yuna == '0')
            {
                Yeji.push(Yuna);
            }
            else if (Yuna == '1' && Yeji.top() == '0')
            {
                Yeji.pop();
            }
            else if (Yuna == '1' && Yeji.top() == '1')
            {
                Yeji.push(Yuna);
            }
            else
            {
                Yeji.push(Yuna);
            }
        }
        if (Yeji.empty())
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}