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
    queue<Node *> Lia;
    if (root)
        Lia.push(root);
    while (!Lia.empty())
    {
        Node *Yuna = Lia.front();
        Lia.pop();
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
        Yuna->left = leftNode;
        Yuna->right = rightNode;
        if (Yuna->left)
            Lia.push(Yuna->left);
        if (Yuna->right)
            Lia.push(Yuna->right);
    }
    return root;
}
int max_height(Node *root)
{
    if(root==NULL)
        return 0;
    int l = max_height(root->left);
    int r = max_height(root->right);
    return max(l, r) + 1;
}
int main()
{
    Node *root = input_binary_tree();
    cout << max_height(root) << endl;
    return 0;
}