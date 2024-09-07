#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // idk what this is, mentors told us to use this on discord 
    int test;
    cin >> test;
    queue<string> Yuna;
    for (int t = 0; t < test; t++)
    {
        int input;
        cin >> input;
        if(input==0)
        {
            string Lia;
            cin >> Lia;
            Yuna.push(Lia);
        }
        else if(input == 1)
        {
            if(Yuna.empty()==false)
            {
                cout << Yuna.front() << endl;
                Yuna.pop();
            }
            else
            {
                cout << "Invalid" << endl;
            }
        }
    }
        return 0;
}