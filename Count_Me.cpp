#include <bits/stdc++.h>
using namespace std;
int main()
{
    int testcase;
    cin>>testcase;
    cin.ignore();
    for(int t=0;t<testcase;t++)
    {
        string Sentence;
        getline(cin,Sentence);
        string word;
        stringstream Yuna(Sentence);
        map<string, int> Lia;
        string MaxWord;
        int max = 0;
        while(Yuna>>word)
        {
            Lia[word]++;
            if(Lia[word]>max)
            {
                max=Lia[word];
                MaxWord = word;
            }
        }
        cout << MaxWord << " " << max << endl;
    }
        return 0;
}