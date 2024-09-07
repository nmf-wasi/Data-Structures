#include <bits/stdc++.h>
using namespace std;
class Kiddos
{
    public:
        string name;
        int roll;
        int marks;
        Kiddos(string name, int roll, int marks)
        {
            this->name=name;
            this->roll = roll;
            this->marks = marks;
        }
};
class compare
{
public:
    bool operator()(Kiddos a, Kiddos b)
    {
        if (a.marks == b.marks)
            return (a.roll < b.roll);
        else
            return (a.marks < b.marks);
    }
};
int main()
{
    int input;
    cin>>input;
    priority_queue<Kiddos, vector<Kiddos>, compare> Yuna;
    for(int i=0;i<input;i++)
    {
        string name;
        int roll;
        int marks;
        cin>>name>>roll>>marks;
        Kiddos Lia(name, roll, marks);
        Yuna.push(Lia);
    }
    int x;
    cin >> x;
    for(int i=0;i<x;i++)
    {
        int c;
        cin>>c;
        if(c==0)
        {
            string name;
            int roll;
            int marks;
            cin >> name >> roll >> marks;
            Kiddos Lia(name, roll, marks);
            Yuna.push(Lia);
            cout << Yuna.top().name << " " << Yuna.top().roll << " " << Yuna.top().marks << endl;
        }
        else if(c==1)
        {
            if(Yuna.empty())
                cout << "Empty" << endl;
            else
                cout<< Yuna.top().name << " " << Yuna.top().roll << " " << Yuna.top().marks << endl;
        }
        else if(c==2)
        {
            if(Yuna.empty())
                cout << "Empty" << endl;
            else
            {
                Yuna.pop();
                if (Yuna.empty())
                    cout << "Empty" << endl;
                else
                    cout << Yuna.top().name << " " << Yuna.top().roll << " " << Yuna.top().marks << endl;
            }

        }
        else
            cout << "Invalid" << endl;
    }
    return 0;
}