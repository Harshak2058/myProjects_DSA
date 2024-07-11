#include<iostream>
using namespace std;

struct Tree {
    int data;
    Tree* lc;
    Tree* rc;
} *root = NULL;

Tree* t(int val) {
    Tree* nn = new Tree;
    nn->data = val;
    nn->lc = NULL;
    nn->rc = NULL;
    return nn;
}

Tree* Insert(Tree* root, int val) {
    if (root == NULL) {
        return t(val);
    } else if (val < root->data) {
        root->lc = Insert(root->lc, val);
    } else if (val > root->data) {
        root->rc = Insert(root->rc, val);
    }
    return root;
}

void inorderTraverse(Tree* root) {
    if (root == NULL) return;
    inorderTraverse(root->lc);
    cout << root->data << " ";
    inorderTraverse(root->rc);
}

void postorderTraverse(Tree* root) {
    if (root == NULL) return;
    postorderTraverse(root->lc);
    postorderTraverse(root->rc);
    cout << root->data << " ";
}

void preorderTraverse(Tree* root) {
    if (root == NULL) return;
    cout << root->data << " ";
    preorderTraverse(root->lc);
    preorderTraverse(root->rc);
}

int main() {
    root = Insert(root, 6);
    root = Insert(root, 1);
    root = Insert(root, 4);
    root = Insert(root, 3);
    root = Insert(root, 8);
    root = Insert(root, 10);

    cout << "Traversing preorder BST:" << endl;
    preorderTraverse(root);
    cout << endl;

    cout << "Traversing inorder BST:" << endl;
    inorderTraverse(root);
    cout << endl;

    cout << "Traversing postorder BST:" << endl;
    postorderTraverse(root);
    cout << endl;

    return 0;
}
