#include <stdio.h>
#include <stdlib.h>

// Define the structure for a tree node
typedef struct TreeNode {
    int value;
    struct TreeNode* left;
    struct TreeNode* right;
} TreeNode;

// Function to create a new tree node
TreeNode* createNode(int value) {
    TreeNode* newNode = (TreeNode*)malloc(sizeof(TreeNode));
    newNode->value = value;
    newNode->left = NULL;
    newNode->right = NULL;
    return newNode;
}

// Function to perform pre-order traversal
void preOrderTraversal(TreeNode* root) {
    if (root == NULL) {
        return;
    }

    // Visit the root node
    printf("%d ", root->value);
    
    // Traverse the left subtree
    preOrderTraversal(root->left);
    
    // Traverse the right subtree
    preOrderTraversal(root->right);
}

// Main function to demonstrate the traversal
int main() {
    // Create a simple binary tree
    TreeNode* root = createNode(1);
    root->left = createNode(2);
    root->right = createNode(3);
    root->left->left = createNode(4);
    root->left->right = createNode(5);
    
    // Perform pre-order traversal
    printf("Pre-order traversal of the binary tree:\n");
    preOrderTraversal(root);
    
    printf("\n");
    
    // Free allocated memory (not shown here for simplicity)
    // Implement proper cleanup in real code

    return 0;
}
