#include <bits/stdc++.h>
using namespace std;
void insert_heap(vector<int>&Lia,int x)
{
    Lia.push_back(x);
    // pushback done in vector like a complete binary tree
    int cur_idx = Lia.size() - 1;
    while (cur_idx != 0)
    {
        int parent_idx = (cur_idx - 1) / 2;
        if (Lia[parent_idx] < Lia[cur_idx])
            swap(Lia[parent_idx], Lia[cur_idx]);
        else
            break;
        cur_idx = parent_idx;
    }
}
void delete_heap(vector<int> &Lia)
{
    Lia[0]=Lia[Lia.size()-1];
    Lia.pop_back();
    int current = 0;
    while(true)
    {
        int left_index = current * 2 + 1;
        int right_index = current * 2 + 2;
        int last_index = Lia.size() - 1;
        if( left_index <= last_index && right_index >= last_index)
        {
            // 2tai ache
            if(Lia[left_index]>Lia[right_index] && Lia[left_index]>Lia[current])
            {
                swap(Lia[left_index],Lia[current]);
                current=left_index;
            }
            else if (Lia[right_index] > Lia[left_index] && Lia[right_index] > Lia[current])
            {
                swap(Lia[right_index], Lia[current]);
                current = right_index;
            }
            else
            {
                break;
            }
        }
        else if(left_index<=last_index)
        {
            //left ache
            if(Lia[left_index]>Lia[current])
            {
                swap(Lia[left_index],Lia[current]);
                current = left_index;
            }
            else
            {
                break;
            }
        }
        else if(right_index>=last_index)
        {
            //right ache
            if (Lia[right_index] > Lia[current])
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
            //ektao nai leaf node
            break;
        }
    }
}

void print_heap(vector<int> Yuna)
{
    for(int x:Yuna)
        cout << x << " ";
    cout << endl;
}
int main()
{
    int n;
    cin>>n;
    vector<int> Lia;
    for (int i = 0; i < n;i++)
    {
        int x;
        cin >> x;
        insert_heap(Lia, x);
    }
    print_heap(Lia);
    delete_heap(Lia);
    print_heap(Lia);
}