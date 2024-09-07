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
    int input;      // array size
    int Lia[input]; // array
    for (int i = 0; i < input; i++)
    {
        cin >> Lia[i];
    }
    Node *root = convert_to_binary(Lia, input, 0, input - 1);

    level_order(root);
    return 0;
}