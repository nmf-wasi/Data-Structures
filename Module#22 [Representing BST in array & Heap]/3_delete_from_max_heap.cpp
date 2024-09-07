#include <bits/stdc++.h>
using namespace std;
void insert_at_heap(vector<int>Lia, int x)
{
    Lia.push_back(x);
    int current_index = Lia.size() - 1;
    while (current_index != 0)
    {
        int parent_index = (current_index - 1) / 2;
        if (Lia[parent_index] > Lia[current_index])
        {
            swap(Lia[parent_index], Lia[current_index]);
        }
        else
            break;
        current_index = parent_index;
    }
}
void print_heap(vector<int> Lia)
{
    for (int val : Lia)
        cout << val << " ";
}
void delete_from_heap(vector<int>Lia)
{
    Lia[0]=Lia[Lia.size()-1];
    Lia.pop_back();
    int current = 0;
    while(true)
    {
        int leftIndex = current * 2 + 1;
        int rightIndex = current * 2 + 2;
        int lastIndex=Lia.size()-1;
        if (leftIndex <= lastIndex && rightIndex<= lastIndex)
        {
            //2tai ache
        }
    }
}
int main()
{
    vector<int>Lia;
    int input;
    cin >> input;
    for (int i = 0;i<input;i++)
    {
        int x;
        cin >> x;
        insert_at_heap(Lia, x);
    }


    return 0;
}