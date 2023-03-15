/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 https://leetcode.com/problems/range-sum-of-bst/
 */

void rangeSumBSTR(struct TreeNode* root,int low,int high,int *res){
    if(root==NULL) return;
    rangeSumBSTR(root->left,low,high,res);
    if(low<=root->val && high>=root->val) (*res)=(*res)+root->val;
    rangeSumBSTR(root->right,low,high,res);
}
int rangeSumBST(struct TreeNode* root, int low, int high){
    int res=0;
    rangeSumBSTR(root,low,high,&res);
    return res;
}
