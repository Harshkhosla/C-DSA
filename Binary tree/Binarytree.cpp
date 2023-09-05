#include <iostream>

// Definition for a binary tree node
struct Node {
    int data;
    Node* left;
    Node* right;

    Node(int value) {
        data = value;
        left = nullptr;
        right = nullptr;
    }
};

// class Binarytree{
// private:
// Node* root ;
// public:
// Binarytree(){
//     root=nullptr;
// }

// void insert( int value){


// }
// };

// Function to insert a new node into the binary tree
Node* insert(Node* root, int value) {
    if (root == nullptr) {
        return new Node(value);
    } else {
        if (value == 0) {
            root->left = insert(root->left, value);
        } else {
            root->right = insert(root->right, value);
        }
        return root;
    }
}

// Function to perform an in-order traversal of the binary tree
void inorderTraversal(Node* root) {
    if (root == nullptr) {
        return;
    }
    inorderTraversal(root->left);
    std::cout << root->data << " ";
    inorderTraversal(root->right);
}

void postoderTrevsal(Node* root){
    if(root==nullptr){
        return;
    }
    postoderTrevsal(root->left);
    postoderTrevsal(root->right);
    std::cout<<root->data<<"";


}
int main() {

    // Binarytree bt;
    // bt.insert(4);
    Node* root = nullptr;

    root = insert(root, 5);
    root = insert(root, 3);
    root = insert(root, 7);
    root = insert(root, 1);
    root = insert(root, 4);

    std::cout << "In-order traversal of the binary tree: ";
    inorderTraversal(root);
    postoderTrevsal(root);
    std::cout << std::endl;

    return 0;
}
