/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 https://leetcode.com/problems/root-equals-sum-of-children/description/
 * };
 */
bool checkTree(struct TreeNode* root){

    if(root==NULL) return true;

    if(root->left!=NULL && root->right!=NULL){
        if(root->val != (root->left->val + root->right->val)) return false;
    }
    return checkTree(root->left);
    return checkTree(root->right);

}
