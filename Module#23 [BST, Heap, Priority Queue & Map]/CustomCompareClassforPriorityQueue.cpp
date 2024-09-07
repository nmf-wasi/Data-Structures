#include <bits/stdc++.h>
using namespace std;
class Student{
    public:
        string name;
        int roll;
        int marks;
        Student(string name, int roll, int marks)
        {
            this->name=name;
            this->roll = roll;
            this->marks = marks;
        }
};
class compare{
    public:
        bool operator()(Student a, Student b)
        {
            if(a.marks > b.marks)
                return true;
            else if(a.marks < b.marks)
                return false;
            else
            {
                if(a.roll > b.roll)
                    return true;
                else
                    return false;
            }
        }
};
int main()
{
    int n;
    cin>>n;
    priority_queue<Student, vector<Student>, compare> Lia;
    for (int i = 0; i < n; i++)
    {
        string name;
        int roll;
        int marks;
        cin >> name >> roll >> marks;
        Student obj(name, roll, marks);
        Lia.push(obj);
    }

    while (!Lia.empty())
    {
        cout << Lia.top().name << " " << Lia.top().roll << " " << Lia.top().marks << endl;
        Lia.pop();
    }
    return 0;
}