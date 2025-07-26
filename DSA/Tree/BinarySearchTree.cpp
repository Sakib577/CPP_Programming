#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

class Node{
    public:
    ll data;
    Node* left;
    Node* right;

    Node(ll d){
        data=d;
        left=right=NULL;
    }
};

class BST{
    public:
    Node* insert(Node* root, ll d){
        if(root== NULL) return new Node(d);
        if(d < root->data) root->left= insert(root->left, d);
        else root->right= insert(root->right, d);
        return root;
    }

    void postorder(Node* root){
        if(root==NULL) return;
        postorder(root->left);
        postorder(root->right);

        cout << root->data << " ";
    }

    void preorder(Node* root){
        if(root==NULL) return;
        cout << root->data << " ";

        preorder(root->left);
        preorder(root->right);
    }

    void inorder(Node* root){
        if(root==NULL) return;

        inorder(root->left);
        cout << root->data << " ";
        inorder(root->right);
    }
};

int main(){
    ll arr[5]={44, 56, 23, 70, 35};

    BST tree;

    Node* root=NULL;

    for (ll i = 0; i < 5; i++)
    {
        root=tree.insert(root,arr[i]);
    }
    
    cout << "Postorder: ";
    tree.postorder(root);

    cout << endl;

    cout << "Preorder: ";
    tree.preorder(root);

    cout << endl;

    cout << "Inorder: ";
    tree.inorder(root);
    cout << endl;

    return 0;
}