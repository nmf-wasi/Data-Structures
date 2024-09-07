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
Node *input_binary_tree(){
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
vector<int>Lia;
void leaf_node_values(Node*root)
{
    queue<Node*>ryu;
    if(root)
        ryu.push(root);
    while(!ryu.empty())
    {
        Node*Yuna=ryu.front();
        ryu.pop();
        if(Yuna->left==NULL && Yuna->right==NULL)
        {
            Lia.push_back(Yuna->value);
        }
        if(Yuna->left)
            ryu.push(Yuna->left);
        if(Yuna->right)
            ryu.push(Yuna->right);
    }
    sort(Lia.begin(), Lia.end(), greater<int>());
    for(int x:Lia)
    {
        cout << x << " ";
    }
}
int main()
{
    Node *root = input_binary_tree();
    leaf_node_values(root);

    return 0;
}