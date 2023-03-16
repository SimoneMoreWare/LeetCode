/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 https://leetcode.com/problems/maximum-depth-of-binary-tree/
 * };
 */

int maxDepth(struct TreeNode* root){
    if (!root)
        return 0;
    else {
        int left_height = maxDepth(root->left);
        int right_height = maxDepth(root->right);
        if (left_height >= right_height)
            return left_height + 1;
        else
            return right_height + 1;
    }
}

