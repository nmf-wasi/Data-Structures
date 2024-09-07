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
int max_height(Node *root)
{
    if (root == NULL)
        return 0;
    int l = max_height(root->left);
    int r = max_height(root->right);
    return max(l, r) + 1;
    //height check korlam
}
bool perfect_binary_tree(Node*root)
{
    if(root==NULL)
        return true;
    //base case gelo
    if(root->left==NULL && root->right==NULL)
        return true;
    //2side null hoile thik ase
    if(root->left==NULL || root->right==NULL)
        return false;
    //jekono ekta NULL hoile false

    int l=max_height(root->left);
    int r=max_height(root->right);
    // 2 tar height soman hoile thik ase

    bool left_side = perfect_binary_tree(root->left);
    bool right_side = perfect_binary_tree(root->right);
    // child dhore pathay dao

    return (l == r) && left_side && right_side;
}
int main()
{
    Node *root = input_binary_tree();
    bool Yuna = perfect_binary_tree(root);
    if(Yuna==true)
        cout << "YES";
    else
        cout << "NO";
    return 0;
}