#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int value;
    Node *next;
    Node *prev;

    Node(int value)
    {
        this->value = value;
        this->next = NULL;
        this->prev = NULL;
    }
};
int main()
{
    list <int> Lia;
    //this list has 0 items
    cout << "Lia's size = " << Lia.size() << endl;

    list <int> Lia (5);
    // this list has 5 items and all of them are empty
    cout << "Lia's size = " << Lia.size() << endl;

    list <int> Lia (5,1);
    // this list has 5 items and all of them are 1
    cout << "Lia's size = " << Lia.size() << endl;

    list<int> Ryu = {10, 20, 30, 40, 50};
    list <int> Yuna(Lia);
    //Yuna will copy all the elements from the list 'Lia'
    cout << "Yuna's size = " << Lia.size() << endl;

    int array[5] = {10, 20, 30, 40, 50};
    list <int> Yuna(array, array + 5);
    // Yuna will copy all the elements from the array
    cout << "Yuna's size = " << Lia.size() << endl;

    vector <int> Yeji = {10, 20, 30, 40, 50};
    list <int> Yuna(Yeji.begin(), Yeji.end());
    // Yuna will copy all the elements from the vector
    cout << "Yuna's size = " << Lia.size() << endl;

    return 0;
}