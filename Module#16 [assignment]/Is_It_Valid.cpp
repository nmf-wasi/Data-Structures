#include <bits/stdc++.h>
using namespace std;
int main()
{
    int testcases;
    cin>>testcases;
    while(testcases--)
    {
        string Lia;
        cin >> Lia;
        stack <char> Yeji;
        for(char Yuna: Lia)
        {
            if (!Yeji.empty())
            {
                if (Yuna == '0' && Yeji.top()=='1')
                {
                    Yeji.pop();
                }
                else if (Yuna == '1' && Yeji.top() == '0')
                {
                    Yeji.pop();
                }
                else if (Yuna == '1' && Yeji.top() == '1')
                {
                    Yeji.push(Yuna);
                }
                else if (Yuna == '0' && Yeji.top() == '0')
                {
                    Yeji.push(Yuna);
                }

            }
            else
            {
                Yeji.push(Yuna);
            }
        }
        if(Yeji.empty()==true)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}