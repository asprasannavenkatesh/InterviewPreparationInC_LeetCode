/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */

struct TreeNode* lowestCommonAncestor(struct TreeNode* root, struct TreeNode* p, struct TreeNode* q) {
    // Base case
    if(root == NULL) {
        return NULL;
    }

    // If either of the Node's val equals the root, then the root is the LCA
    if((root->val == p->val) || (root->val == q->val)) {
        return root;
    }

    // Else find the LCA by going through the nodes of the BST
    struct TreeNode *left_subtree_LCA = lowestCommonAncestor(root->left, p, q);
    struct TreeNode *right_subtree_LCA = lowestCommonAncestor(root->right, p, q);

    // If we have both left_subtree_LCA and right_subtree_LCA, then the nodes are on the two
    // subtrees of the root, hence the root will be the LCA
    if(left_subtree_LCA && right_subtree_LCA) {
        return root;
    }

    // If not, return whichever among left LCA or right LCA that is not NULL
    return left_subtree_LCA ? left_subtree_LCA : right_subtree_LCA;
}
