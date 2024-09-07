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
Node* input_binary_tree()
{
    int value;
    cin >> value;
    //value nila,
    Node *root;
    if(value==-1)
        root = NULL;
        ///-1 means empty
    else
        root = new Node(value);
        // creating dynamic node with value
    queue <Node*> Yuna;
        //ekta queue nilam
    if(root)
        Yuna.push(root);
        //if root isnt NULL, then it will be pushed to queue
    while (!Yuna.empty())
    {
        Node *Lia = Yuna.front();
        Yuna.pop();
        int left,right;
        cin >> left >> right;
        Node *leftNode;
        Node *rightNode;
        if(left==-1)
            leftNode = NULL;
        else
            leftNode = new Node(left);
        if(right==-1)
            rightNode = NULL;
        else
            rightNode = new Node(right);

        Lia->left = leftNode;
        Lia->right = rightNode;
            // connecting both nodes to both sides
        if(leftNode)
            Yuna.push(leftNode);
        if(rightNode)
            Yuna.push(rightNode);
    }
    return root;
}
void level_order_print(Node *root)
{
    if(root==NULL)
    {
        cout<<"Tree is empty"<<endl;
        return;
    }
    queue<Node *> Lia;
    Lia.push(root);
    while(!Lia.empty())
    {
        Node *Yuna=Lia.front();
        Lia.pop();
        cout<<Yuna->value<<" ";
        if(Yuna->left!=NULL)
            Lia.push(Yuna->left);
        if(Yuna->right)
            Lia.push(Yuna->right);
    }
}
int main()
{
    Node *root = input_binary_tree();
    level_order_print(root);
    //not the same root as in the function, its  just taking the memory from that function
    return 0;
}