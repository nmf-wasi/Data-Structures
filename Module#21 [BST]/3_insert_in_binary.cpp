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
    if (root == NULL)
    {
        cout << "Tree is empty";
        return;
    }
    // Queue er surute root dewa
    queue<Node *> Yuna;
    Yuna.push(root);
    while (!Yuna.empty())
    {
        // 1. ber kore ana
        Node *Lia = Yuna.front();
        Yuna.pop();
        // 2. kaj kora
        cout << Lia->value << " ";
        // 3. children rakha
        if (Lia->left != NULL)
        {
            Yuna.push(Lia->left);
        }
        if (Lia->right)
        {
            Yuna.push(Lia->right);
        }
    }
}
void insert_in_BST(Node*&root, int x) //might need to update root as well because x can be less than x as well
{
    if(root == NULL)
    {
        root = new Node(x);
    }
    if(x < root->value)
    {
        if(root->left==NULL)
        {
            root->left = new Node(x);
        }
        else
        {
            insert_in_BST(root->left, x);
        }
    }
    else if(x > root->value)
    {
        if(root->right==NULL)
        {
            root->right = new Node(x);
        }
        else
        {
            insert_in_BST(root->right, x);
        }
    }
}
int main()
{
    Node *root = input_binary_tree();
    int x;
    cin >> x;
    insert_in_BST(root , x);
    level_order(root);
    return 0;
}