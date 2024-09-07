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
int sum_without_leaf(Node*root)
{
    int sum = 0;
    queue<Node *> Lia;
    if(root)
        Lia.push(root);
    while(!Lia.empty())
    {
        Node*Yuna=Lia.front();
        Lia.pop();

        if (Yuna->left != NULL || Yuna->right != NULL)
        {
            sum += Yuna->value;
        }


        if (Yuna->left)
            Lia.push(Yuna->left);
        if (Yuna->right)
            Lia.push(Yuna->right);
    }
    return sum;
}
int main()
{
    Node*root=input_binary_tree();
    cout << sum_without_leaf(root);
    return 0;
}