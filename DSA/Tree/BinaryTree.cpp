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

class BT{
    public:
    Node* insert(Node* root, ll d){
        Node* newNode=new Node(d);
        if(root==NULL) return newNode;

        queue <Node*> q;
        q.push(root);

        while (!q.empty())
        {
            Node* temp=q.front();
            q.pop();

            if(temp->left == NULL) {
                temp->left=newNode;
                return root;
            } else {
                q.push(temp->left);
            }

            if(temp->right==NULL){
                temp->right=newNode;
                return root;
            } else {
                q.push(temp->right);
            }
        }
        
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

    BT tree;

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