#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

struct BST {
    int data;
    struct BST* left;
    struct BST* right;
};

bool isBST(struct BST* root) {
    int min = INT_MIN;
    int *prev=&min;
    if (root == NULL) {
        return true;
    }

    if (!isBST(root->left)) {
        return false;
    }
    if (root->data <= *prev) {
        return false;
    }
    *prev = root->data;

    return isBST(root->right);
}
struct BST* insertNode(struct BST* root,int data){
    
}
int main() {
    struct BST* root = malloc(sizeof(struct BST));
    root->data = 10;
    root->left = malloc(sizeof(struct BST));
    root->left->data = 5;
    root->left->left = NULL;
    root->left->right = NULL;
    root->right = malloc(sizeof(struct BST));
    root->right->data = 15;
    root->right->left = NULL;
    root->right->right = NULL;

    if (isBST(root))
        printf("BST\n");
    else
        printf("Not BST\n");

    return 0;
}
