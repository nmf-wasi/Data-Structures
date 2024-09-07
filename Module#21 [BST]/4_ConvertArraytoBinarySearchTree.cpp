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
Node* Convert_to_BST(int Lia[], int size, int left, int right)
{
    if(left > right)
        return NULL;
    int mid = (left + right) / 2;
    Node *root = new Node(Lia[mid]);
    Node *leftNode = Convert_to_BST(Lia, size, left, mid - 1);
    Node *rightNode = Convert_to_BST(Lia, size, mid + 1, right);
    root->left=leftNode;
    root->right = rightNode;
    return root;
}

int main()
{
    int input;
    cin>>input;
    int Lia[input];
    for (int i = 0; i < input; i++)
    {
        cin >> Lia[i];
    }
    Node *root = Convert_to_BST(Lia, input, 0, input - 1); // initially left is on 0th index

    return 0;
}