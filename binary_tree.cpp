#include<iostream>
using namespace std;
class Node
{
    public:
    int data;
    Node*left;
    Node*right;
};
class BinaryTree
{
    public:
    Node *root;
    BinaryTree()
    {
        root=NULL;
    }
    Node *newNode(int n)
    {
        Node * nn = new Node;
        nn -> data=n;
        nn -> right= NULL;
        nn -> left = NULL;
        return nn;
    }
    void preOrder(Node *node)
    {
        if (node == NULL) return;
        cout << node ->data <<" " ;
        preOrder(node->left);
        preOrder(node->right);
    }
    void postOrder(Node *node)
    {
        if (node == NULL)return;
        postOrder(node->left);
        postOrder(node->right);
        cout<< node->data <<" ";
    }
    void inOrder(Node *node)
    {
        if (node ==NULL)return;
        inOrder(node->left);
        cout<<node->data<<" ";
        inOrder(node->right);
    }
};

int main()
{
    BinaryTree bt;
    bt.root = bt.newNode(1);
    bt.root->left=bt.newNode(2);
    bt.root->right=bt.newNode(3);
    bt.root->left->left=bt.newNode(4);
    bt.inOrder(bt.root);
    cout<<endl;
    bt.preOrder(bt.root);
    cout<<endl;
    bt.postOrder(bt.root);
    cout<<endl;
}