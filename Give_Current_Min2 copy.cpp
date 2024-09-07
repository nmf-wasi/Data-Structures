#include <bits/stdc++.h>
using namespace std;
void insert_Heap(vector<int> &Lia, int x)
{
        Lia.push_back(x);
        int current_index = Lia.size() - 1;
        while(current_index!=0)
        {
            int parent_index = (current_index - 1) / 2;
            if(Lia[parent_index]>Lia[current_index])
                swap(Lia[parent_index], Lia[current_index]);
            else
                break;
            current_index = parent_index;
        }
}
void delete_heap(vector<int>&Lia)
{
    if (Lia.empty())
    {
        return; //base case
    }
    Lia[0] = Lia[Lia.size() - 1];
    Lia.pop_back();
    if(Lia.empty())
    {
        cout << "Empty" << endl;
        return;
    }
    else
    {
        int current = 0;
        while (true)
        {
            int left_index = current * 2 + 1;
            int right_index = current * 2 + 2;
            int last_index = Lia.size() - 1;
            if (left_index <= last_index && right_index <= last_index)
            {
                // 2tai
                if (Lia[left_index] < Lia[right_index] && Lia[left_index] < Lia[current])
                {
                    swap(Lia[left_index], Lia[current]);
                    current = left_index;
                }
                else if (Lia[right_index] < Lia[left_index] && Lia[right_index] < Lia[current])
                {
                    swap(Lia[right_index], Lia[current]);
                    current = right_index;
                }
                else
                {
                    break;
                }
            }
            else if (left_index <= last_index)
            {
                // left
                if (Lia[left_index] < Lia[current])
                {
                    swap(Lia[left_index], Lia[current]);
                    current = left_index;
                }
                else
                {
                    break;
                }
            }
            else if (right_index <= last_index)
            {
                // right
                if (Lia[right_index] < Lia[current])
                {
                    swap(Lia[right_index], Lia[current]);
                    current = right_index;
                }
                else
                {
                    break;
                }
            }
            else
            {
                break;
            }
        }
    }
}

int main()
{
    int input;
    cin>>input;
    priority_queue<int, vector<int>, greater<>> Yuna;
    for(int i=0;i<input;i++)
    {
        int x;
        cin>>x;
        Yuna.push(x);
    }
    int querry;
    cin >> querry;
    for(int q=0;q<querry;q++)
    {
        int command;
        cin>>command;
        if(command==0)
        {
            int x;
            cin >> x;
            Yuna.push(x);
            cout << Yuna.top() << endl;
        }
        else if(command==1)
        {
            if (!Yuna.empty())
                cout << Yuna.top() << endl;
            else
                cout << "Empty" << endl;
        }
        else if(command==2)
        {
            if(!Yuna.empty())
            {
                Yuna.pop();
                if(!Yuna.empty())
                    cout << Yuna.top() << endl;
                else
                    cout << "Empty" << endl;
            }
            else
                cout << "Empty" << endl;
        }
    }
    return 0;
}