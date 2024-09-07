#include <bits/stdc++.h>
using namespace std;
int main()
{
    int input,query;
    cin >> input >> query;
    int Lia[input];
        for(int i=0;i<input;i++)
        {
            cin >> Lia[i];
        }
    sort(Lia, Lia + input);

        while(query--)
        {
            int x;
            cin >> x;
            bool flag = false;
            int L = 0;
            int R = input - 1;
    
            while (L <= R)
                {
                    int mid_index = (L + R) / 2;

                    if (Lia[mid_index] == x)
                    {
                        flag = true;
                        break;
                    }
                    else if (x < Lia[mid_index])
                    {
                        // bame jao
                        R = mid_index - 1;
                    }
                    else if (x > Lia[mid_index])
                    {
                        // dane jao
                        L = mid_index + 1;
                    }

                }

                if (flag == true)
                {
                    cout << "found" << endl;
                }
                else
                {
                    cout << "not found" << endl;
                }
        }
    return 0;
}