#include <iostream>
#include <climits>

struct Node {
  int data;
  Node* left;
  Node* right;

  Node(int data) {
    this->data = data;
    left = right = NULL;
  }
};

// Utility function to check if BST
bool isBSTUtil(Node* node, int min, int max) {
  if (node == NULL) {
    return true;
  }

  if (node->data < min || node->data > max) {
    return false;
  }

  return isBSTUtil(node->left, min, node->data - 1) &&
         isBSTUtil(node->right, node->data + 1, max);
}

// Main function to check if binary tree is BST
bool isBST(Node* root) {
  return isBSTUtil(root, INT_MIN, INT_MAX);
}