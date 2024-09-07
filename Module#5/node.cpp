#include <bits/stdc++.h>
using namespace std;
class Node
{
    public:
        int value;
        Node *next;
};
int main()
{
    Node a, b;
    a.value = 10;
    b.value = 20;
    a.next = &b;
    b.next = NULL;

    cout << a.value << endl;
    cout << b.value << endl;
    cout << a.next->value << endl;
    //taking the address of the group and calling value from there [shortcut]
    cout << (*a.next).value << endl;
    //derefferencing the value of b [longcut]

    return 0;
}