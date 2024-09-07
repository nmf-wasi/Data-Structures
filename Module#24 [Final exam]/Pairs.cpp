#include <bits/stdc++.h>
using namespace std;
class People
{
public:
    string name;
    int numb;
    People(string name, int numb)
    {
        this->name = name;
        this->numb = numb;
    }
};
class compare
{
public:
    bool operator()(People a, People b)
    {
        if (a.name == b.name)
            return (a.numb < b.numb);
        else
            return (a.name > b.name);
    }
};
int main()
{
    int input;
    cin >> input;
    priority_queue<People, vector<People>, compare> Yuna;
    for (int i = 0; i < input; i++)
    {
        string name;
        int numb;
        cin >> name >> numb;
        People Lia(name, numb);
        Yuna.push(Lia);
    }
    while (!Yuna.empty())
    {
        cout << Yuna.top().name << " " << Yuna.top().numb << '\n';
        Yuna.pop();
    }
    return 0;
}