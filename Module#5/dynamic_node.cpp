#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int value;
    Node *next;

    Node(int value)
    {
        this->value = value;
        this->next = NULL;
    }
};
int main()
{
    Node Bead(10);
    //head as object and it's just a static object
    Node *Head=new Node(10); //first node is called head
    //head is here now a pointer which has a datatype of Node and it's dynamic object
    Node *Lia=new Node(20);
    Head->next = Lia;

    cout<<Head->value<<endl;

    cout<<Lia->value<<endl;

    cout<<Head->next->value<<endl;

    cout<<(*(*Head).next).value<<endl;
    
    return 0;
}