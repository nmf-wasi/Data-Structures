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
vector<int> Lia;
vector<int> Yuna;
void printLeftSide(Node *root)
{
    if (root == NULL)
        return;
    if (root->left)
        printLeftSide(root->left);
    else if (root->right)
        printLeftSide(root->right);
    Lia.push_back(root->value);
}

void printRightSide(Node *root)
{
    if (root == NULL)
        return;
    if (root->right)
        printRightSide(root->right);
    else if (root->left)
        printRightSide(root->left);
    Yuna.push_back(root->value);
}

int main()
{
    Node *root = input_binary_tree();
    printLeftSide(root);
    if (root->right)
        printRightSide(root->right);

    if (root->right == NULL)
        reverse(Lia.begin(), Lia.end());
    if (root->left != NULL)
    {
        reverse(Lia.begin(), Lia.end());
        for (int x : Lia)
        {
            cout << x << " ";
        }
    }
    if (root->right != NULL)
    {
        reverse(Yuna.begin(), Yuna.end());
        for (int x : Yuna)
        {
            cout << x << " ";
        }
    }
    return 0;
}
