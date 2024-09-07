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
void level_nodes(Node*root, int x)
{
    queue<pair<Node*,int>>Lia;
    Lia.push({root,0});
    vector<int> level_tracker;
    while(!Lia.empty())
    {
        pair<Node*,int> Yuna=Lia.front();
        Node*Ryu=Yuna.first;
        int level=Yuna.second;
        level_tracker.push_back(level);
        Lia.pop();
        // ber kora done

        // kaj suru
        if(level==x)
        {
            cout << Ryu->value << " ";
        }
        // kaj sesh

        // child abuse done
        if(Ryu->left)
            Lia.push({Ryu->left,level+1});
        if(Ryu->right)
            Lia.push({Ryu->right,level+1});
    }
        if(x > level_tracker.back())
            cout << "Invalid";
}
int main()
{
    Node *root = input_binary_tree();
    int x;
    cin >> x;
    level_nodes(root, x);
    return 0;
}