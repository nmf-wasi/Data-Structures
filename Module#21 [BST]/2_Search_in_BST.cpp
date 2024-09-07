#include <bits/stdc++.h>
using namespace std;
class Node{
    public:
        int value;
        Node* left;
        Node* right;
    Node(int value)
    {
        this->value =value;
        this->left = NULL;
        this->right = NULL;
    }
};
Node *input_binary_tree()
{
    int value;
    cin >> value;
    Node *root;
    if (value == -1)
        root = NULL;
    else
        root = new Node(value);
    queue<Node *> Yuna;
    if (root)
        Yuna.push(root);
    while (!Yuna.empty())
    {
        Node *Lia = Yuna.front();
        Yuna.pop();
        int left, right;
        cin >> left >> right;
        Node *leftNode;
        Node *rightNode;
        if (left == -1)
            leftNode = NULL;
        else
            leftNode = new Node(left);
        if (right == -1)
            rightNode = NULL;
        else
            rightNode = new Node(right);

        Lia->left = leftNode;
        Lia->right = rightNode;
        if (leftNode)
            Yuna.push(leftNode);
        if (rightNode)
            Yuna.push(rightNode);
    }
    return root;
}
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
bool search(Node*root, int x)
{
    if(root == NULL)
        return false;
    if(root->value == x)
        return true;
    if(x<root->value)
    {
        // bool l= search(root->left, x);
        // if(l==true)
        //     return true;
        // else
        //     return false;

        // bool l = search(root->left, x);
        // return l;

        return search(root->left, x);
    }

    else if (x > root->value)
    {
        // bool r= search(root->right, x);
        // if(r==true) 
        //     return true;
        // else
        //     return false;

        // bool r = search(root->right, x);
        // return r;

        return search(root->right, x);
    }

    // complexity O(height) {worst case}
    // for perfect binary tree: log(N)
    //check vid from 14min
}
int main()
{
    Node *root=input_binary_tree();
    if(search(root,6))
        cout << "FOUND IT!";
    else
        cout << "NOT FOUND";
    return 0;
}