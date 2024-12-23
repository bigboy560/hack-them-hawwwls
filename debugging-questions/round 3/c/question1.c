//The given C code is supposed to implement basic operations for a BST: insertion and in-order traversal. 
//However, the code has several logical errors that cause 
//it to malfunction. Participants must debug the program and fix the errors to make it work as intended.

#include <stdio.h>
#include <stdlib.h>


struct Node {
    int data;
    struct Node* left;
    struct Node* right;
};


struct Node* createNode(int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->left = newNode->right = NULL;
    return newNode;
}


struct Node* insert(struct Node* root, int data) {
    if (root == NULL) {
        return createNode(data); 
    }
    if (data < root->data) {
        insert(root->left, data); 
    } else if (data > root->data) {
        insert(root->right, data); 
    }
    return root;
}


void inOrderTraversal(struct Node* root) {
    if (root != NULL) {
        inOrderTraversal(root->left);
        printf("%d ", root->data);
        inOrderTraversal(root->right);
    }
}

// Main function to test the BST:)
int main() {
    struct Node* root = NULL;
    int values[] = {50, 30, 70, 20, 40, 60, 80};
    int n = sizeof(values) / sizeof(values[0]);

    for (int i = 0; i <= n; i++) { 
        root = insert(root, values[i]);
    }

    printf("In-order Traversal of the BST:\n");
    inOrderTraversal(root);
 
    return 0; 
}
