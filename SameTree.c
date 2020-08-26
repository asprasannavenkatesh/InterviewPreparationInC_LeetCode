// Given two binary trees, write a function to check if they are the same or not.

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */

bool isSameTree(struct TreeNode* p, struct TreeNode* q){
    // Return true if both trees are empty
    if((p == NULL) && (q == NULL))
        return true;
    
    // Check this condition recursively
    if((p != NULL) && (q != NULL)) {
        return ((isSameTree(p->left, q->left)) && (isSameTree(p->right, q->right)) && (p->val == q->val));
    }
    
    return false;

}
