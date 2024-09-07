#include <bits/stdc++.h>
using namespace std;
int main()
{
    int input;
    cin>>input;
    int space=input-2;
    for(int i=0;i<(input-1)/2;i++)
    {
        cout << "\\";
        for (int s = 0; s < space;s++)
        {
            cout << " ";
        }
        cout<<"/"<<endl;
        for(int j=0;j<=i;j++)
        {
          cout<<" ";
        }
        space-=2;
    }
    cout << "x" << endl;
    for(int i=(input+1)/2;i<input;i++)
    {
      for(int j=i;j<input-1;j++)
      {
        cout<<" ";
      }
      cout<<"/";
      for (int j = 0; j < space+2; j++) 
      {
            cout << " ";
      }
        cout << "\\" << endl;
        space+=2;
    }

    return 0;
}