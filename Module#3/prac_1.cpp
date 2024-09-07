#include <bits/stdc++.h>
using namespace std;
int main()
{
    int input;
    cin>>input;
    vector <int> Lia(input);
    for (int i = 0; i < input;i++)
    {
        cin >> Lia[i];
    }
    int x;
    cin>>x;
    int L=0;
    int R=input-1;
    bool flag = false;
    sort(Lia,Lia+input);
    while(L<=R)
    {
        int mid_index = (L + R) / 2;
        if(Lia[mid_index]==x)
        {
            flag=true;
            break;
        }
        else if(x>mid_index)
        {
            L=mid_index+1;
        }
        else if(x<mid_index)
        {
            R=mid_index-1;
        }
    }
    if (flag == true)
    {
        cout << "true";
    }
    else
    {
        cout << "false";
    }
        return 0;
}