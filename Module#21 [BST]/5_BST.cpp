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
    queue <Node*> Yuna;
    Yuna.push(root);
    while(!Yuna.empty())
    {
        Node *Lia= Yuna.front();
        Yuna.pop();
        cout<<Lia->value<<" ";
        if(Lia->left!=NULL)
            Yuna.push(Lia->left);
        if(Lia->right)
            Yuna.push(Lia->right);
    }
}
bool search(Node*root, int x)
{
    if(root == NULL)
        return false;
    if(root->value == x)
        return true;
    if(x<root->value)
        return search(root->left, x);
    else if (x > root->value)
        return search(root->right, x);
}
void insert_in_BST(Node*&root, int x)
{
    if(root == NULL)
        root = new Node(x);
    if(x < root->value)
    {
        if(root->left==NULL)
            root->left = new Node(x);
        else
            insert_in_BST(root->left, x);
    }
    else if(x > root->value)
    {
        if(root->right==NULL)
            root->right = new Node(x);
        else
            insert_in_BST(root->right, x);
    }
}
Node *convert_to_binary(int Lia[], int input, int left, int right)
{
    if (left > right)
        return NULL;
    int mid = (left + right) / 2;
    Node *root = new Node(Lia[mid]);
    Node *leftRoot = convert_to_binary(Lia, input, left, mid - 1);
    Node *rightRoot = convert_to_binary(Lia, input, mid + 1, right);
    root->left = leftRoot;
    root->right = rightRoot;
    return root;
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