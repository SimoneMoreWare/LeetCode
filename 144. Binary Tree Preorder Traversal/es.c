/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 https://leetcode.com/problems/binary-tree-preorder-traversal/
 */
/**
 * Note: The returned array must be malloced, assume caller calls free().
 */

void preorderTraversalR(struct TreeNode* root,int* res,int** returnSize){
    if(root==NULL) return;
    res[(**returnSize)++]=root->val;
    preorderTraversalR(root->left,res,returnSize);
    preorderTraversalR(root->right,res,returnSize);
}
int* preorderTraversal(struct TreeNode* root, int* returnSize){
    int MAXDIM = 100;
    int *res = (int *) malloc(MAXDIM*sizeof(int));
    *returnSize=0;
    preorderTraversalR(root,res,&returnSize);
    return res;
}
