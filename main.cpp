#include <bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    struct Node *left;
    struct Node *right;

    Node(int val) {
        data = val;
        left = nullptr;
        right = nullptr;
    }
};

void PreOrderTraversal (struct Node *root){
    if(root == nullptr) return;
    cout << root->data << " ";
    PreOrderTraversal(root->left);
    PreOrderTraversal(root->right);
}

void PostOrderTraversal (struct Node* root){
    if(root == nullptr) return;
    PostOrderTraversal(root->left);
    PostOrderTraversal(root->right);
    cout << root->data << " ";
}
void InOrderTraversal (struct Node* root){
    if(root == nullptr) return;
    InOrderTraversal(root->left);
    cout << root->data << " ";
    InOrderTraversal(root->right);
}

int main(){
    struct Node *root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);

    root->left->left = new Node(5);
    root->left->right = new Node(4);

    root->right->left = new Node(6);
    root->right->right = new Node(7);

    cout << "Pre-order traversal: ";
    PreOrderTraversal(root);
    cout << "Post-order traversal: ";
    PostOrderTraversal(root);
    cout << "In-order traversal: ";
    InOrderTraversal(root);

}