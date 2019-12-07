#include "bst.h"

struct TreeNode* root;

void insert(struct TreeNode* node)
{
    struct TreeNode* x, *p;

    if (!root)
    root = node;
    else {
        x = root;
        while (x) {
            p = x;
            if (node->val < x->val) {
                x = x->left;
            } else {
                x = x->right;
            }
        }
        if (node->val < p->val)
          p->left = node;
        else
          p->right = node;
    }
}


void inorderTreeWalk(struct TreeNode* node)
{
    struct TreeNode* p = root;
    while(p) {
        inorderTreeWalk(p->left);
        printf("%d\t", p->val);
        inorderTreeWalk(p->right);
    }
}

struct TreeNode* search(struct TreeNode* node, int k)
{
    while (node && node->val != k) {
       if (node->val < k) {
          node = node->left;
       } else 
          node = node->right;
    }
    return node;
}

struct TreeNode* minimum(struct TreeNode* node)
{
    while (node && node->left)
      node = node->left;
    return node;
}

struct TreeNode* maximum(struct TreeNode* node)
{
    while (node && node->right)
      node = node->right;
    return node;
}

struct TreeNode* successor(struct TreeNode* node)
{
    
}
