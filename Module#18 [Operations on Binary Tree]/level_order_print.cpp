#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int value;
    Node *left;
    Node *right;
    Node(int value)
    {
        this->value = value;
        this->left = NULL;
        this->right = NULL;
    }
};
void level_order(Node *root)
{
    if(root==NULL)
    {
        cout << "Tree is empty";
        return;
    }
    // Queue er surute root dewa
    queue <Node*> Yuna;
    Yuna.push(root);
    while(!Yuna.empty())
    {
        // 1. ber kore ana
        Node *Lia= Yuna.front();
        Yuna.pop();
        // 2. kaj kora
        cout<<Lia->value<<" ";
        // 3. children rakha
        if(Lia->left!=NULL)
        {
            Yuna.push(Lia->left);
        }
        if(Lia->right)
        {
            Yuna.push(Lia->right);
        }
    }
}
int main()
{
    Node *root = new Node(10);
    Node *a = new Node(20);
    Node *b = new Node(30);
    Node *c = new Node(40);
    Node *d = new Node(50);
    Node *e = new Node(60);
    Node *f = new Node(70);
    Node *g = new Node(80);
    Node *h = new Node(90);
    Node *i = new Node(100);
    root->left = a;
    root->right = b;
    a->left = c;
    a->right = h;
    b->right = d;
    c->right = e;
    h->right = i;
    d->left = f;
    d->right = g;
    level_order(root);
    return 0;
}