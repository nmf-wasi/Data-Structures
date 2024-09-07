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
void level_order(Node *root)
{
    if(root==NULL)
    {
        cout << "Tree is empty";
        return;
    }
    // Queue er surute root dewa
    queue <Node*> Yuna;
    Yuna.push(root);
    while(!Yuna.empty())
    {
        // 1. ber kore ana
        Node *Lia= Yuna.front();
        Yuna.pop();
        // 2. kaj kora
        cout<<Lia->value<<" ";
        // 3. children rakha
        if(Lia->left!=NULL)
        {
            Yuna.push(Lia->left);
        }
        if(Lia->right)
        {
            Yuna.push(Lia->right);
        }
    }
}
bool SearchInBST(Node*root,int input)
{
    if (root==NULL)     //base case
        return false;
    if(root->value==input)      //soman hoile
        return true;
    if(input < root->value)    //choto hoile
    {
        // [bool l = SearchInBST(root->left, input);
        // if(l = true)
        //     return true;
        // else
        //     return false;]

        return SearchInBST(root->left, input);
    }
    if(input > root->value)  //boro hoile
    {
        // [bool r = SearchInBST(root->right, input);
        // if(r = true)
        //     return true;
        // else
        //     return false;]

        return SearchInBST(root->right, input);
    }
}
int main()
{
    Node *root = input_binary_tree();
    int x;
    cin >> x;
    // bool Lia = SearchInBST(root,x);
    if (SearchInBST(root, x))
        cout << "FOUND IT!";
    else
        cout << "NOT FOUND";
    return 0;
}