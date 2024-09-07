#include <bits/stdc++.h>
using namespace std;
int main()
{
    queue <int> Lia;
    queue<int> Yeji;
    int input_one;
    int input_two;
    cin>>input_one;
    for(int i=0;i<input_one;i++)
    {
        int x;
        cin >> x;
        Lia.push(x);
    }

    cin >> input_two;
    for(int i=0;i<input_two;i++)
    {
        int y;
        cin >> y;
        Yeji.push(y);
    }
    while(!Yeji.empty())
    {
        int z = Yeji.front();
        Lia.push(z);
        Yeji.pop();
    }
    while(!Lia.empty())
    {
        cout << Lia.front() << endl;
        Lia.pop();
    }
    return 0;
}