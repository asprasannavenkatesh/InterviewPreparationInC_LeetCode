// Given a binary tree, check whether it is a mirror of itself (ie, symmetric around its center)

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
bool isMirror(struct TreeNode* node1, struct TreeNode* node2) {
    if(node1==NULL && node2==NULL)
        return true;
    
    // For a tree to be a mirror of itself, value in the two nodes need to be the same, the left subtree of left tree and
    // right subtree of right tree have to be mirror of each other and also right subtree of left tree and the left subtree
    // of the right tree have to be mirror of each other. 
    // For the pair of nodes, Check these conditions recursively
    if(node1 && node2 && (node1->val == node2->val)) {
        return (isMirror(node1->left, node2->right) && isMirror(node1->right, node2->left));
    }
    
    return false;
}

bool isSymmetric(struct TreeNode* root){
    // Empty tree
    if(root == NULL) {
        return true;
    }
    
    return isMirror(root, root);
}
